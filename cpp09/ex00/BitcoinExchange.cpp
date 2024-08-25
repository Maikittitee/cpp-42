#include "BitcoinExchange.hpp"

BTC::BTC(std::string filename){
	_setDatabase(filename);
}

BTC::BTC(BTC const& other){

}

BTC&	BTC::operator=(BTC const& rhs){

}

BTC::~BTC(){

}

void	BTC::evaluate(char* fileName) const{

}

void BTC::_setDatabase(std::string filename){
	std::fstream file;

	file.open(filename, std::ios::in);
	if (!file.is_open())
		throw CouldNotOpenFile();
	else {
		std::string content;
        // Read data from the file object and put it into a string.
        while (std::getline(file, content)) { 
            // Print the data of the string.
            std::cout << content << "\n"; 
        }
	}


}