#include "Point.hpp"

static Fixed ft_abs(Fixed fp) { return (fp < 0 ? fp * -1 : fp); }

static Fixed getArea(Point const &a, Point const &b, Point const &c)
{
	return (ft_abs(a.getX()*(b.getY()-c.getY()) + b.getX()*(c.getY()-a.getY()) + c.getX()*(a.getY()-b.getY())) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	
	Fixed ABC = getArea(a,b,c);
	Fixed A = getArea(point, b, c);
	Fixed B = getArea(point, a, c);
	Fixed C = getArea(point, a, b);

	if ( ((ABC == A + B + C)) && A != 0 && B != 0 && C != 0 )
		return (true);
	return (false);	

}