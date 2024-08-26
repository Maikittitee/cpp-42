#include "BitcoinExchange.hpp"

int	main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}
	BTC btc("data.csv");

	// std::cout << btc.getDatabase() << std::endl;
	btc.evaluate(av[1]);	
}