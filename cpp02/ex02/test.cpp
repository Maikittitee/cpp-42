
#include "Fixed.hpp"

#include <iostream>

int	main()
{
	Fixed n1 (1);	
	Fixed n2 (1);	
	Fixed n3 (4);	
	Fixed n4 (4);

	Fixed f1 (1.67f);	
	Fixed f2 (1.67f);	
	Fixed f3 (4.1f);	
	Fixed f4 (4.1f);

	// Test compare

	// int 

	if (n1 < n3)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (n3 > n1)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (n1 >= n2)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	
	if (n3 >= n2)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (n1 == n2)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (n1 <= n3)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (n1 <= n2)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (n1 != n3)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;


	// float

	if (f1 < f3)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (f3 > f1)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (f1 >= f2)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	
	if (f3 >= f2)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (f1 == f2)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (f1 <= f3)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (f1 <= f2)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (f1 != f3)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;


	// test 

}
