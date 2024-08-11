#include "Array.hpp" 
#include <iostream>

int	main() {
	Array<int> arr(10);

	arr[0] = 99;
	std::cout << arr.size() << std::endl; 
	std::cout << arr[0] << std::endl; 
}
