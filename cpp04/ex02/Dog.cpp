
#include "Dog.hpp"

Dog::Dog(void) : AbAnimal("Dog")
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &other): AbAnimal(other)
{
	delete this->_brain;
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->_brain = new Brain();
	this->_brain = other._brain;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator=(const Dog &other)
{
	this->__type = other.__type;
	this->_brain = other._brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOFๆๆๆๆๆๆๆ" << std::endl;
}
