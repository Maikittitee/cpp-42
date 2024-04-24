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

Aform *Intern::makeForm(const std::string name, const std::string target) const
{
	if (name == "shrubbery creation" ){
		return new ShrubberyCreationForm(target);
	}
	else if (name == "robotomy request"){
		return new RobotomyRequestForm(target);
	}
	else if (name == "presidential pardon"){
		return new PresidentialPardonForm(target);
	}else{
		std::err << name << " form doesn't exist"  << std::endl;
	}

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */