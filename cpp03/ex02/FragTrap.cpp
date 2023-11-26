#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap Parameter constructor called" << std::endl;
	this->_hp = 100; 
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void) 
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assign operator called" << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_ad = other._ad;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Let's High Fivessssss !!!! " << std::endl;
}