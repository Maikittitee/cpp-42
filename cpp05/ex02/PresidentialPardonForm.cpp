#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5),_target(target) 
{
	std::cout << "Presidential Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): AForm(src), _target(src._target)
{
	std::cout << "Presidential Copy Constructor Called"  << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Destructor Called"  << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this == &rhs )
		return (*this);
	AForm::operator=(rhs);
	_target  = rhs._target;
	return (*this);

}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << "[Presidential]" << i.get_target() << "sign required:" << i.get_sign_grade() << " exe req:" << i.get_exec_grade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string PresidentialPardonForm::get_target(void) const { return _target;}

/* ************************************************************************** */