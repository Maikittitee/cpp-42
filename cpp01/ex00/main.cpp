#include "Zombie.hpp"

int	main(void)
{
	Zombie *my_zom = newZombie("NongMai");

	my_zom->announce();
	randomChump("someone");

	delete my_zom;
}