#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_hp = 100; 
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_hp = 100; 
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap (const ScavTrap &other): ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assign operator called" << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_ad = other._ad;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	// pass
}

void	ScavTrap::guardGate()
{
	// pass

}



