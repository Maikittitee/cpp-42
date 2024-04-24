#include "Intern.hpp"


Intern::Intern()
{
	std::cout << "Intern constructor called." << std::endl;
}

Intern::Intern( const Intern & src )
{
	std::cout << "Intern Copy constructor called" << std::endl;
}


Intern::~Intern()
{
	std::cout << "Intern Destructor Called" << std::endl;
}


Intern &				Intern::operator=( Intern const & rhs )
{
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	o << "Intern :)" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AForm *Intern::makeForm(const std::string name, const std::string target) const
{
	if (name == "shrubbery creation" ){
		std::cout << "Itern creates " << name;
		return new ShrubberyCreationForm(target);
	}
	else if (name == "robotomy request"){
		std::cout << "Itern creates " << name;
		return new RobotomyRequestForm(target);
	}
	else if (name == "presidential pardon"){
		std::cout << "Itern creates " << name;
		return new PresidentialPardonForm(target);
	}else{
		std::cerr << name << " form doesn't exist"  << std::endl;
	}
	return (nullptr);

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */