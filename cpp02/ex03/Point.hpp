#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point{
	public:
		// Constructure
		Point( void );
		Point (const float x, const float y);
		Point ( const Point &pnt);

		// Destructor
		~Point( void );

		// Assign overloading
		Point & operator = (const Point &pnt);


		// getter
		Fixed	getX(void) const ;
		Fixed	getY(void) const ;

	private:
		const Fixed _x;
		const Fixed _y;

};

#endif