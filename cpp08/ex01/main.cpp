#include "Span.hpp"
#include <iostream>


int main() {
  Span sp = Span(10);

	// try{
	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// } catch (std::exception &e){
	// 	std::cerr << e.what() << std::endl;
	// }
	try {
		sp.addNumber(20);
		sp.addNumber(21);
		sp.addRangeNumber(1, 10);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp << std::endl;
	return 0; 
}