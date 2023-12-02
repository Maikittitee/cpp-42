
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	// std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	// std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog(void)
{
	// std::cout << "Dog Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark" << std::endl;
}
