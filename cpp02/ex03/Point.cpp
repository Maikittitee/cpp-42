#include "Point.hpp"

Point::Point(void): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point &pnt): _x(pnt._x), _y(pnt._y) {}

Point &Point::operator = (const Point &pnt)
{
	if (this != &pnt)
		std::cerr << "can not assign const instant to a normal one." << std::endl;
	return (*this);
}

Point::~Point( void ) {}

Fixed Point::getX(void) const
{
	return (this->_x);
}

Fixed Point::getY(void) const
{
	return (this->_x);
}





