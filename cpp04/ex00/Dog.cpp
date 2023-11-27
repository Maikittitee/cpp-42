
#include "Dog.hpp"

Cat::Cat(void) : Animal("Dog")
{
	std::cout << "Dog Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	this->__type = "Dog";
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "WOOFๆๆๆๆๆๆๆ" << std::endl;
}
