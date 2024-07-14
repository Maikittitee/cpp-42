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
	std::cout << "end_ptr: " << end_ptr << std::endl;

}