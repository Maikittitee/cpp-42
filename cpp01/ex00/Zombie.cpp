#include "Zombie.hpp"

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
	std::cout << this->_name << ': ' << "BraiiiiiiinnnzzzZ..." << std::endl;

}

Zombie*	newZombie(std::string name)
{
	Zombie *ret = new Zombie(name);
	return (ret);
}

void randomChump( std::string name )
{
	Zombie random_chump = Zombie(name);
	random_chump.announce();
}



