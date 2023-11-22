#include "Point.hpp"

static Fixed ft_abs(Fixed fp)
{
	return (fp >= 0 ? fp : fp * -1);
}

static Fixed getArea(Point const &a, Point const &b, Point const c)
{
   return ft_abs(ft_abs((a.getX()*(b.getY()-c.getY())) + ft_abs(b.getX()*(c.getY()-a.getY())) + ft_abs(c.getX()*(a.getY()-b.getY())))/ 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	// std::cout << "Area is " << getarea(a, b, c) << std::endl;float

	Fixed A = getArea(b, c, point);
	Fixed B = getArea(a, c, point);
	Fixed C = getArea(a, b, point);
	Fixed eiei = getArea(a,b,c);

	std::cout << eiei << " " << A << " " << B << " " << C << std::endl;
	if (eiei == A+B+C && A != 0 && B != 0 && C != 0)
		return (true);
	return (false);	

}