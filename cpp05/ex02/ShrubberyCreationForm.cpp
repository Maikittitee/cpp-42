#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target)
{
	std::cout << "Shrubbery Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): _target(src._target)
{
	std::cout << "Strubbery Copy Constructor Called"  << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Strubbery Destructor Called"  << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this == &rhs )
		return (*this);
	AForm::operator=(rhs);
	_target  = rhs._target;
	return (*this);

}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */