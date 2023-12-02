
#include "Dog.hpp"

Dog::Dog(void) : AbAnimal("Dog")
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &other): AbAnimal(other)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->_brain = new Brain();
	this->_brain = other._brain;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		delete this->_brain;
		AbAnimal::operator=(rhs);
		this->_brain = new Brain();
		*this->_brain = *rhs._brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bok Bok (❍ᴥ❍ʋ)" << std::endl;
}
