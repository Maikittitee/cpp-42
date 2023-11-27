#include "Animal.hpp"

Animal::Animal(void): __type("None") {
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(std::string type): __type(type) {
	std::cout << "Animal String Constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	*this = other;
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal &other){
	std::cout << "Animal Assigned Operator called" << std::endl;
	this->__type = other.__type;
	return (*this);
}

void	Animal::setType(std::string type){
	std::cout << "Animal setType() method called" << std::endl;
	this->__type = type;
}

void	Animal::makeSound(void){
	std::cout << "Animal makeSound() method called" << std::endl;

}


