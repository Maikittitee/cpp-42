#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap mai("mai");

	mai.attack("ARMEL");
	FragTrap idk = mai;
	mai.beRepaired(100);
	mai.printStatus();
	idk.printStatus();

	mai.highFivesGuys();

}