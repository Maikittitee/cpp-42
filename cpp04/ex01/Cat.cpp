
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(const Cat &other)
{
	this->__type = "Cat";
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meawwwww <3" << std::endl;
}
