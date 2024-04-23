#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45),_target(target) 
{
	std::cout << "Robotomy Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): AForm(src), _target(src._target)
{
	std::cout << "Robotomy Copy Constructor Called"  << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Destructor Called"  << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this == &rhs )
		return (*this);
	AForm::operator=(rhs);
	_target  = rhs._target;
	return (*this);

}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "[Robotomy]" << i.get_target() << "sign required:" << i.get_sign_grade() << " exe req:" << i.get_exec_grade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string RobotomyRequestForm::get_target(void) const { return _target;}

/* ************************************************************************** */