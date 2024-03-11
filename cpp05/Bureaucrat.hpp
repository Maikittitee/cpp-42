#ifndef BUREAUCRAT_HPP
#   define BUREAUCRAT_HPP

#   include <iostream>
#   include <string>

class Bureaucrat{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name);
		Bureaucrat(const Bureaucrat &other);

		Bureaucrat operator= (const Bureaucrat &rhs);
		

		int get_grade( void );
		const std::string get_name( void );

		int set_grade( int grade );
		const std::string set_name( const std::string name );



}


#endif