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
static bool	scienceNotation(std::string str, int type);

ScalarConverter::ScalarConverter(void)
{
	
}

ScalarConverter::~ScalarConverter(void)
{

}

ScalarConverter::ScalarConverter(ScalarConverter &other)
{
	static_cast<void>(other);
}



std::ostream &operator<< (std::ostream &os, const ScalarConverter &sc)
{
	static_cast<void>(sc);
	os << "Scalar Converter object";
	return (os);
}


void ScalarConverter::convert(const char *str)
{
	double n;
	char *end_ptr;

	n = strtod(str, &end_ptr);
	_convertChar(n, end_ptr, std::string(str));
	_convertInt(n, end_ptr, std::string(str));
	_convertFloat(n, end_ptr, std::string(str));
	_convertDouble(n, end_ptr, std::string(str));
}

void _convertChar(double num, char *endptr, std::string str){
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
	if ( !isnan(num) && (*endptr == '\0' || _isFloat(endptr, std::string(str))))
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void _convertFloat(double num, char *endptr, std::string str){
	if (scienceNotation(std::string(str), e_float))
	{
		return;
	}
	if (*endptr == '\0' || _isFloat(endptr, std::string(str))){
		std::stringstream tmp;
		tmp << num;
		std::string tmp2 = tmp.str();

		if (tmp2.find('.') == std::string::npos) 
			std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
		else 
			std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;	

	}
	else
		std::cout << "float: impossible" << std::endl;	
}

void _convertDouble(double num, char *endptr, std::string str){
	if (scienceNotation(std::string(str), e_double))
	{
		return;
	}
	if (*endptr == '\0' || _isFloat(endptr, std::string(str)))
	{
		std::stringstream tmp;
		tmp << num;
		std::string tmp2 = tmp.str();

		if (tmp2.find('.') == std::string::npos) 
			std::cout << "double: " << static_cast<float>(num) << ".0" << std::endl;
		else 
			std::cout << "double: " << static_cast<float>(num) << std::endl;	

	}
	else 
		std::cout << "double: impossible" << std::endl;
}

bool _isFloat(char *endptr, std::string str){
	if ((*endptr == 'f' && *(endptr + 1) == '\0' && str.find_last_of(".", endptr - &str.at(0)) != std::string::npos))
		return (true);
	return (false);

}

static bool	scienceNotation(std::string str, int type){
	if (str == "nan" || str == "nanf")
	{
		if (type == e_double)
			std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << std::endl;
		else if (type == e_float)
			std::cout << "float: " << std::numeric_limits<double>::quiet_NaN() << "f" << std::endl;
		return true;
	}
	else if (str == "inf" || str == "inff" || str == "+inf" || str == "+inff"){
		if (type == e_double)
			std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
		if (type == e_float)
			std::cout << "float: " << std::numeric_limits<float>::infinity() << "f" << std::endl;
		return true;
	}
	else if (!str.compare("-inf") || !str.compare("-inff"))
	{
		if (type == e_double)
			std::cout << "double: " << -std::numeric_limits<double>::infinity() << std::endl;
		if (type == e_float)
			std::cout << "float: " << -std::numeric_limits<float>::infinity() << "f" << std::endl;
		return true;
	}
	return (false);

}