#include "Zombie.hpp"


Zombie::Zombie(void) {}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "bye bye, "<< this->_name << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->_name << ": "<< "BraiiiiiiinnnzzzZ..." << std::endl;

}

void Zombie::name_setter( std::string name)
{
	this->_name = name;
}