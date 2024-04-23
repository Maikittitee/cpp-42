#include "AForm.hpp"

AForm::AForm(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _is_sign(false), _sign_grade(sign_grade), _exec_grade(exec_grade){
	if (sign_grade < 1 || exec_grade < 1)
		throw AForm
	::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw AForm
	::GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other._name), _is_sign(other._is_sign), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade){
}


AForm::~AForm(){
	std::cout << "AForm Destructor Called" << std::endl;
}

AForm& AForm::operator=(const AForm &rhs){
	if (this == &rhs)
		return *this;
	_is_sign = rhs._is_sign;
	return *this;
}

void AForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.get_grade() > this->_sign_grade)
		throw AForm
	::GradeTooLowException();
	else
		this->_is_sign = true;
}


const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}

const std::string	AForm::get_name( void ) const {return _name;}

const int	AForm::get_sign_grade( void ) const {return _sign_grade;}

const int AForm::get_exec_grade( void ) const {return (_exec_grade);}


std::ostream & operator<< (std::ostream &o, AForm const & i)
{
	o << "[AForm]" << i.get_name() << "," << i.get_sign_grade() << "," << i.get_exec_grade();
	return (o);
}