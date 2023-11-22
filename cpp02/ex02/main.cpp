#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
/*
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

	// test calculation

	std::cout << n1 << "+" << n3 << " = " <<  n1 + n3 << std::endl;
	std::cout << n1 << "-" << n3 << " = " << n1 - n3 << std::endl;
	std::cout << n3 << "-" << n1 << " = " << n3 - n1 << std::endl;
	std::cout << n1 << "*" << n3 << " = " << n1 * n3 << std::endl;
	std::cout << n1 << "/" << n3 << " = " << n1 / n3 << std::endl;
	
	std::cout << f1 << "+" << f3 << " = " << f1 + f3 << std::endl;
	std::cout << f1 << "-" << f3 << " = " << f1 - f3 << std::endl;
	std::cout << f3 << "-" << f1 << " = " << f3 - f1 << std::endl;
	std::cout << f1 << "*" << f3 << " = " << f1 * f3 << std::endl;
	std::cout << f1 << "/" << f3 << " = " << f1 / f3 << std::endl;

	// test increment / decrement 

	Fixed i(1);
	std::cout << "i=" << i << " i++ = " << i++ << " and now is " << i << std::endl;
	std::cout << "i=" << i << " i++ = " << i++ << " and now is " << i << std::endl;
	std::cout << "i=" << i << " i++ = " << i++ << " and now is " << i << std::endl;

	
	std::cout << "i=" << i << " ++i = " << ++i << " and now is " << i << std::endl;
	std::cout << "i=" << i << " ++i = " << ++i << " and now is " << i << std::endl;
	std::cout << "i=" << i << " ++i = " << ++i << " and now is " << i << std::endl;

	i = Fixed(11);

	std::cout << "i=" << i << " i-- = " << i-- << " and now is " << i << std::endl;
	std::cout << "i=" << i << " i-- = " << i-- << " and now is " << i << std::endl;
	std::cout << "i=" << i << " i-- = " << i-- << " and now is " << i << std::endl;

	
	std::cout << "i=" << i << " --i = " << --i << " and now is " << i << std::endl;
	std::cout << "i=" << i << " --i = " << --i << " and now is " << i << std::endl;
	std::cout << "i=" << i << " --i = " << --i << " and now is " << i << std::endl;

	// max min

	std::cout << "max of " << n1 << " and " << n3 << " is "  << Fixed::max(n1, n3) << std::endl;
	std::cout << "max of " << f1 << " and " << f3 << " is "  << Fixed::max(f1, f3) << std::endl;
	std::cout << "max of " << n1 << " and " << f3 << " is "  << Fixed::max(n1, f3) << std::endl;

	std::cout << "min of " << n1 << " and " << n3 << " is "  << Fixed::min(n1, n3) << std::endl;
	std::cout << "min of " << f1 << " and " << f3 << " is "  << Fixed::min(f1, f3) << std::endl;
	std::cout << "min of " << n1 << " and " << f3 << " is "  << Fixed::min(n1, f3) << std::endl;


} */ 