#include "BitcoinExchange.hpp"

int	main(){
	BTC btc("data.csv");

	// std::cout << btc.getDatabase() << std::endl;
	btc.evaluate("input.txt");	
}