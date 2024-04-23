#ifndef AFORM_HPP
#   define AFORM_HPP

#   include <iostream>
#   include <string>
#   include "Bureaucrat.hpp"


class Bureaucrat;

class AForm{
	private:
		const std::string	_name;
		bool				_is_sign;
		const int			_sign_grade;
		const int			_exec_grade;

	public:
		// basic
		AForm(const std::string name, const int sign_grade, const int exec_grade);
		AForm(const AForm &other);
		virtual ~AForm() = 0;
		AForm& operator=(const AForm &rhs);


		// exception
		class GradeTooHighException : public std::exception{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char* what() const throw();
		};

		class IsNotSignException: public std::exception{
			const char *what() const throw();
		};


		// getter
		const std::string	get_name( void ) const;
		const int		get_sign_grade( void ) const;
		const int get_exec_grade( void ) const;
		const bool get_is_sign( void ) const;

		// method
		void	beSigned(Bureaucrat &bureaucrat);
		
};

std::ostream & operator<< (std::ostream &o, AForm const & i);

#endif