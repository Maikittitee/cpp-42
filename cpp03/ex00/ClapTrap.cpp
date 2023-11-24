#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "CrapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap ( std::string name )
{
	std::cout << "CrapTrap string Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other): _name(other._name), _hp(other._hp), _ep(other._ep), _ad(other._ad)
{
	std::cout << "CrapTrap Copy Constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &ct)
{
	*this = ct;
	return (*this);
}