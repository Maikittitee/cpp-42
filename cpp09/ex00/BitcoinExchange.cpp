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

	file.open(filename.c_str(), std::ios::in);
	if (!file.is_open())
		throw CouldNotOpenFile();
	else {
		std::string content;
        while (std::getline(file, content)) { 
            size_t pos = content.find(",");
			try {
				if (pos != std::string::npos)
					_database[content.substr(0, pos)] = std::atof(content.substr(pos + 1, content.size()).c_str()); 
			}
			catch (std::exception &e){
				std::cerr << e.what() << std::endl;
				throw NoDataBase();
			}
        }
	}
}

date_price_t BTC::getDatabase(void) const{
	return (_database);
}

std::ostream &operator<<(std::ostream &os, const date_price_t &date_price){
	std::map<std::string, float>::const_iterator it;

	os << "DATABASE" << std::endl;
	os << "---------" << std::endl;
	for (it = date_price.begin(); it != date_price.end(); it++){
		os << it->first << ": " << it->second << std::endl;
	}
	return (os);
}
