#include <iostream>
#include "Point.hpp"

int main( void ) {
	Point a(0, 0);
	Point b(0, 4);
	Point c(4, 0);


	// std::cout << a.getX() << " " << a.getY() << std::endl;
	// std::cout << b.getX() << " " << b.getY() << std::endl;
	// std::cout << c.getX() << " " << c.getY() << std::endl;

	// inside
	if (bsp(a, b, c, Point(1, 1)))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;
	
	// inside
	if (bsp(a, b, c, Point(0.1, 0.1)))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;

	// inside
	if (bsp(a, b, c, Point(3.9, 0.01)))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;

	// outside
	if (bsp(a, b, c, Point(4, 5)))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;

	// outside very far
	if (bsp(a, b, c, Point(99, 99)))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;

	// edge
	if (bsp(a, b, c, Point(0, 2)))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;

	// vertex
	if (bsp(a, b, c, Point(4, 0)))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;





}