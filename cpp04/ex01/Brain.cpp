#include "Brain.hpp"		
		
Brain::Brain(void){
	std::cout << "Brain Start !" << std::endl;
	// std::cout < "[Brain] Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &other){
	// std::cout < "[Brain] Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
}

Brain& Brain::operator= (const Brain &rhs){
	// std::cout << "[Brain] Copy Assignment called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain( void ){
	std::cout << "Brain Destroyyed ;-;" << std::endl;
	// std::cout < "[Brain] Destructor called" << std::endl;
}
