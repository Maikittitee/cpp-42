#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>

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