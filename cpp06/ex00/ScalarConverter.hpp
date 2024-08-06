#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <math.h>
# include <stdlib.h>

enum e_type
{
	e_float, e_double
};

class ScalarConverter{
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter &other);
		virtual ~ScalarConverter() = 0;
		ScalarConverter& operator= (const ScalarConverter &);
		
		static void convert(const char *str);
	
};


std::ostream &operator<< (std::ostream &os, const ScalarConverter &sc);
# endif 