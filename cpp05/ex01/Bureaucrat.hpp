#ifndef BUREAUCRAT_HPP
#   define BUREAUCRAT_HPP

#   include <iostream>
#   include <string>
# 	include "Form.hpp"

class Form;

class Bureaucrat{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat operator= (const Bureaucrat &rhs);
		int get_grade( void );
		const std::string get_name( void );


		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};

		void incrementGrade();
		void decrementGrade();

		void signForm( Form &form );



};


#endif