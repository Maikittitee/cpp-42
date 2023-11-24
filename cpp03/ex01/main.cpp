#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap a("Mai");
	ScavTrap b("Mavis");

	a.attack("John doe");
	b.attack("John doe");

	b.takeDamage(99);
	a.printStatus();
	b.printStatus();


}