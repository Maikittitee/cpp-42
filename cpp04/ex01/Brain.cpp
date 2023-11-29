#include "Brain.cpp"		
		
Brain::Brain(void){
	std::cout < "[Brain] Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &other){
	std::cout < "[Brain] Copy Constructor called" << std::endl;
}

Brain& Brain::operator= (const Brain &rhs){
	std::cout < "[Brain] Copy Assignment called" << std::endl;
}

Brain::~Brain( void ){
	std::cout < "[Brain] Destructor called" << std::endl;
}
