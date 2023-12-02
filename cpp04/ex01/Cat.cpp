
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->_brain = new Brain();
	*this->_brain = *other._brain;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		delete this->_brain;
		Animal::operator=(rhs);
		this->_brain = new Brain();
		*this->_brain = *rhs._brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meawwwww <3 ≽^•⩊•^≼" << std::endl;
}
