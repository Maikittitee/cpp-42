#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Mai");
	ClapTrap b("Pmew");

	for (int i=1; i < 13 ; i++)
	{
		std::cout << "=====================" << std::endl;
		std::cout << std::left << "===== Round " << i << std::right << " ======" << std::endl;
		std::cout << "====================="<< std::endl;
		b.attack("Mai");
		a.takeDamage(b.getAD());
		a.printStatus();
		b.printStatus();
		std::cout << std::endl;
	}

	b.beRepaired(1000);
	a.beRepaired(100000000);
	a.printStatus();
	b.printStatus();


}