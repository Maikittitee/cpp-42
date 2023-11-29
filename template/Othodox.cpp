#include "Othodox.cpp"		
		
Othodox::Othodox(void){
	std::cout < "[Othodox] Default Constructor called" << std::endl;
}

Othodox::Othodox(const Othodox &other){
	std::cout < "[Othodox] Copy Constructor called" << std::endl;
}

Othodox& Othodox::operator= (const Othodox &rhs){
	std::cout < "[Othodox] Copy Assignment called" << std::endl;
}

Othodox::~Othodox( void ){
	std::cout < "[Othodox] Destructor called" << std::endl;
}

