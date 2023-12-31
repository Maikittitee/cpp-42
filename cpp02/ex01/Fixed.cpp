#include "Fixed.hpp"

// Constructor and Destructor

Fixed::Fixed() :_raw_bits(0) 
{
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &fp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fp; // is it the same address ? it shouldn't be
	
	// alternative
	// this->_raw_bits = fp.getRawBits();
}

Fixed::Fixed(const int n): _raw_bits(n << _op_bits) {std::cout << "Int constructor called" << std::endl;}

Fixed::Fixed(const float n): _raw_bits(roundf(n * (1 << this->_op_bits))) {std::cout << "Float constructor called" << std::endl;}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


// Oparator 

Fixed & Fixed::operator = (const Fixed &fp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = fp._raw_bits;
	// *this = fp;
	return (*this); 

}


// Member Function

int	Fixed::getRawBits() const
{
	
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
}

int	Fixed::toInt( void ) const
{
	return (this->_raw_bits >> this->_op_bits);

}

float	Fixed::toFloat( void ) const
{
	return (float(this->_raw_bits) / (1 << this->_op_bits));
}


std::ostream& operator<<(std::ostream& os, const Fixed& fp) 
{
    os << (float)fp.toFloat();
    return os;
}
