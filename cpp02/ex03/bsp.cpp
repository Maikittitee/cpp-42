#include "Point.hpp"

Fixed ft_abs(Fixed fpNum)
{	
	if (fpNum < 0)
		return (fpNum * -1);
	return (fpNum);
}

Fixed getArea(Point const &a, Point const &b, Point const &c)
{
	// Fixed dummy = ft_abs(a.getX()*(b.getY()-c.getY()) + (b.getX()*(c.getY()-a.getY())) + (c.getX()*(a.getY()-b.getY())))/ 2;

	Fixed e1 = a.getX()*(b.getY()-c.getY());
	Fixed e2 = b.getX()*(c.getY()-a.getY()); 
	Fixed e3 = c.getX()*(a.getY()-b.getY());


	// std::cout << a.getX() << " " << a.getY() << std::endl;
	// std::cout << b.getX() << " " << b.getY() << std::endl;
	// std::cout << c.getX() << " " << c.getY() << std::endl;
	// std::cout << e1 << std::endl; 
	// std::cout << e2 << std::endl; 
	// std::cout << e3 << std::endl; 
	return (ft_abs(e1 + e2 + e3) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	// std::cout << "Area is " << getarea(a, b, c) << std::endl;float

	Fixed A = getArea(point, b, c);
	Fixed B = getArea(point, a, c);
	Fixed C = getArea(point, a, b);
	Fixed ABC = getArea(a,b,c);

	std::cout << ABC << " " << A << " " << B << " " << C << std::endl;
	if ( ABC == A + B + C )
		return (true);
	return (false);	

}