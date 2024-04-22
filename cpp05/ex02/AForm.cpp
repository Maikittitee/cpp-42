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

std::string AForm::getName( void ){
	return _name;
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}

