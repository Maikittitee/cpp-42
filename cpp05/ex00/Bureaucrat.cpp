#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(0) {}

Bureaucrat::Bureaucrat(const std::string name) : _name(name), _grade(0) {}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[Bureaucrat] Destructor Called"  << std::endl;
}

Bureaucrat Bureaucrat::operator= (const Bureaucrat &rhs){
	if (this == &rhs)
		return *this;
	_grade = rhs._grade;
	return *this;
}

int Bureaucrat::get_grade( void ){
	return _grade;
}

const std::string Bureaucrat::get_name( void ){
	return _name;
}

void Bureaucrat::incrementGrade(){ // +++
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void Bureaucrat::decrementGrade(){ // ---
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}
