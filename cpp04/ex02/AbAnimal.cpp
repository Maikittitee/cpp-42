#include "AbAnimal.hpp"

AbAnimal::AbAnimal(void): __type("None") {
	std::cout << "AbAnimal Default Constructor called" << std::endl;
}

AbAnimal::AbAnimal(std::string type): __type(type) {
	std::cout << "AbAnimal String Constructor called" << std::endl;
}

AbAnimal::AbAnimal(const AbAnimal &other):__type(other.__type) {
	std::cout << "AbAnimal Copy Constructor called" << std::endl;
}

AbAnimal::~AbAnimal(void) {
	std::cout << "AbAnimal Destructor called" << std::endl;
}

AbAnimal&	AbAnimal::operator=(const AbAnimal &other){
	std::cout << "AbAnimal Assigned Operator called" << std::endl;
	if (this != &other)
		this->__type = other.__type;
	return (*this);
}

void	AbAnimal::setType(std::string type){
	// std::cout << "AbAnimal setType() method called" << std::endl;
	this->__type = type;
}

std::string	AbAnimal::getType(void) const {
	return (this->__type);
}

void	AbAnimal::makeSound(void) const {
	std::cout << "AbAnimal makeSound() method called" << std::endl;

}


