#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): __type("None") {
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): __type(type) {
	std::cout << "WrongAnimal String Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "WrongAnimal Assigned Operator called" << std::endl;
	this->__type = other.__type;
	return (*this);
}

void	WrongAnimal::setType(std::string type){
	std::cout << "WrongAnimal setType() method called" << std::endl;
	this->__type = type;
}

std::string	WrongAnimal::getType(void) const {
	std::cout << "WrongAnimal getType() method called" << std::endl;
	return (this->__type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal makeSound() method called" << std::endl;

}


