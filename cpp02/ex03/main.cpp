#include <iostream>
#include "Point.hpp"

int main( void ) {
	Point a;
	Point b(0, 2);
	Point c(1, 0);

	if (bsp(a, b, c, Point(0.5f,0.5f)))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;

}