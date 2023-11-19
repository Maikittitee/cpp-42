#include "Harl.hpp"

Harl::Harl( void )
{
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	this->func_ptr[0] = &Harl::debug;
	this->func_ptr[1] = &Harl::info;
	this->func_ptr[2] = &Harl::warning;
	this->func_ptr[3] = &Harl::error;
}

Harl::~Harl( void ) {}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\nI really do!" << std::endl;

}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Harl::complainFilter ( std::string level )
{
	int mode;
	
	for (mode = 0; mode < 4; mode++){
		if (level.compare(this->_level[mode]) == 0)
			break;
	}
	switch (mode){
		case 0:
			(this->*func_ptr[0])();
			std::cout << std::endl;
		case 1:
			(this->*func_ptr[1])();
			std::cout << std::endl;
		case 2:
			(this->*func_ptr[2])();
			std::cout << std::endl;
		case 3:
			(this->*func_ptr[3])();
			std::cout << std::endl;
		break;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}