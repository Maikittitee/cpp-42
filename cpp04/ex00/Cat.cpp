
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	// std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	// std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat(void)
{
	// std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meawwwww <3" << std::endl;
}
