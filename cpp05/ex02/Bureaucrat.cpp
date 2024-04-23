#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(0) {}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

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

const int Bureaucrat::get_grade( void ) const {
	return _grade;
}

const std::string Bureaucrat::get_name( void ) const{
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

void Bureaucrat::signForm( AForm &form ){
	try{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.get_name() << std::endl;
	}
	catch (std::exception &e){
		std::cout << this->_name << " cannot sign " << form.get_name() << " because " << e.what() << std::endl;
	}

}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & i )
{
	o <<  "[Bureaucrat] name:" << i.get_name() << ", grade:" << i.get_grade(); 
	return (o);
}