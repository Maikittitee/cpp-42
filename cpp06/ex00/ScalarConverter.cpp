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
	_convertChar(n, end_ptr, std::string(str));
	_convertInt(n, end_ptr, std::string(str));
	_convertFloat(n, end_ptr, std::string(str));
	_convertDouble(n, end_ptr, std::string(str));
}

void _convertChar(double num, char *endptr, std::string str){
	if (num >= 32 && num <= 126)
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
}

void _convertInt(double num, char *endptr, std::string str){

}

void _convertFloat(double num, char *endptr, std::string str){

}

void _convertDouble(double num, char *endptr, std::string str){

}