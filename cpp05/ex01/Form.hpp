#ifndef FORM_HPP
#   define FORM_HPP

#   include <iostream>
#   include <string>
#   include "Bureaucrat.hpp"


class Bureaucrat;

class Form{
	private:
		const std::string	_name;
		bool				_is_sign;
		const int			_sign_grade;
		const int			_exec_grade;

	public:
		Form(const std::string name, const int sign_grade, const int exec_grade);
		Form(const Form &other);
		~Form();
		Form operator=(const Form &rhs);

		class GradeTooHighException : public std::exception{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char* what() const throw();
		};

		void	beSigned(Bureaucrat &bureaucrat);


		std::string	getName( void );

};

#endif