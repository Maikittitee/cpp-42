#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap( void ): _name(""), _hp(10), _ep(10), _ad(0)
{
	std::cout << "CrapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap ( std::string name ): _name(name), _hp(10), _ep(10), _ad(0)
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

// getter , setter 

int ClapTrap::getHP()
{
	return (this->_hp);
}
int	ClapTrap::getEP()
{
	return (this->_ep);
}
int	ClapTrap::getAD()
{
	return (this->_ad);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_ep <= 0 || this->_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " not able to attack anymore." << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_ad << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hp -= amount;
	std::cout << "ClapTrap " << _name << "take Damage and loss " << amount << " HP" << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " not able to be repaired." << std::endl;
		return ;
	}
	if (amount > 0)
		this->_ep --;
	this->_hp += amount;
	std::cout << "ClapTrap " << _name << "has be Repaired with " << amount << " HP" << std::endl;

}
void	ClapTrap::printStatus(void)
{
	std::cout << "-----" << this->_name << "-----" << std::endl;
	std::cout << "hit point: " << this->_hp << std::endl;
	std::cout << "enegy point: " << this->_ep << std::endl;
	
}