#include "Fixed.hpp"

Fixed::Fixed() :_raw_bits(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fp;
	// this->_raw_bits = fp.getRawBits();
}

Fixed & Fixed::operator = (const Fixed &fp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = fp.getRawBits();
	return (*this); 

}


int	Fixed::getRawBits() const
{
	
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
}