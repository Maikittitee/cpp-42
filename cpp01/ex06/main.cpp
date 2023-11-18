#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;
	if (ac != 2)
		return (1);

	harl.complainFilter(av[1]);
	return (0);
}