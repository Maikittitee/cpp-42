#ifndef BUREAUCRAT_HPP
#   define BUREAUCRAT_HPP

#   include <iostream>
#   include <string>
# 	include "AForm.hpp"

class AForm;

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

		// getter
		const int get_grade( void ) const;
		const std::string get_name( void ) const;


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

		void signForm( AForm &form );



};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & i );


#endif