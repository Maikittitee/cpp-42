#include "Form.hpp"

Form::Form(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _is_sign(false), _sign_grade(sign_grade), _exec_grade(exec_grade){
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name), _is_sign(other._is_sign), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade){
}

Form::~Form(){
	std::cout << "Form Destructor Called" << std::endl;
}

Form Form::operator=(const Form &rhs){
	if (this == &rhs)
		return *this;
	_is_sign = rhs._is_sign;
	return *this;
}

void Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.get_grade() > this->_sign_grade)
		throw Form::GradeTooLowException();
	else
		this->_is_sign = true;
}

std::string Form::getName( void ){
	return _name;
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}

