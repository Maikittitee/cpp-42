/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:00:45 by ktunchar          #+#    #+#             */
/*   Updated: 2024/06/26 14:02:08by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool _isFloat(char *endptr, std::string str);
static void	_convertChar(double num, char* endptr, std::string str);
static void	_convertInt(double num, char* endptr, std::string str);
static void	_convertFloat(double num, char* endptr, std::string str);
static void	_convertDouble(double num, char* endptr, std::string str);

ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter &other)
{

}



std::ostream &operator<< (std::ostream &os, const ScalarConverter &sc)
{
 return (os);
}


void ScalarConverter::convert(const char *str)
{
	double n;
	char *end_ptr;

	n = strtod(str, &end_ptr);
	std::cout << "n: " << n << std::endl;
	std::cout << "end_ptr: " << *end_ptr << std::endl;
	std::cout << "--------------" << std::endl;
	_convertChar(n, end_ptr, std::string(str));
	_convertInt(n, end_ptr, std::string(str));
	_convertFloat(n, end_ptr, std::string(str));
	_convertDouble(n, end_ptr, std::string(str));
}

void _convertChar(double num, char *endptr, std::string str){

	// std::cout << "min char: " << (int)std::numeric_limits<char>::min() << std::endl;
	// std::cout << "min char: " << (int)std::numeric_limits<char>::max() << std::endl;

	// print able
	if ((*endptr == '\0' || _isFloat(endptr, std::string(str)))  && num >= 32 && num <= 126)
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
	
	// non printable 0 - 31
	else if ((*endptr == '\0' || _isFloat(endptr, std::string(str)))  && num >= std::numeric_limits<char>::min() && num <= std::numeric_limits<char>::max())
		std::cout << "char: Non displayable" << std::endl;
	else 
		std::cout << "char: imposible" << std::endl;	
}

void _convertInt(double num, char *endptr, std::string str){
	if (*endptr == '\0' || _isFloat(endptr, std::string(str)))
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void _convertFloat(double num, char *endptr, std::string str){

}

void _convertDouble(double num, char *endptr, std::string str){

}

bool _isFloat(char *endptr, std::string str){
	if ((*endptr == 'f' && *(endptr + 1) == '\0' && str.find_last_of(".", endptr - &str.at(0)) != std::string::npos))
		return (true);
	return (false);

}