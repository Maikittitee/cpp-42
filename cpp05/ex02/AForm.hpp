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


		// getter
		std::string	get_name( void );
		int		get_sign_grade( void );
		int get_exec_grade( void );

		// method
		void	beSigned(Bureaucrat &bureaucrat);
		
};

#endif