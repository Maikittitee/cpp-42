#include "Animal.hpp"

Animal::Animal(void): __type("None") {
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal &other)
{
	std::cout << "Animal Assigned Operator called" << std::endl;
	*this = other;
}