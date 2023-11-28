
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	this->__type = "WrongCat";
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meawwwww <3" << std::endl;
}
