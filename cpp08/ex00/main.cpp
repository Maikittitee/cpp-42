#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(5);
	vec.push_back(6);


	for (unsigned long i = 0; i < vec.size(); i++){
		std::cout << vec[i] << std::endl; 
	}

	std::cout << "output: " << std::boolalpha << easyfind(vec, 1) << std::endl;
	std::cout << "output: " << std::boolalpha << easyfind(vec, 2) << std::endl;
	std::cout << "output: " << std::boolalpha << easyfind(vec, 3) << std::endl;
	std::cout << "output: " << std::boolalpha << easyfind(vec, 4) << std::endl;
	std::cout << "output: " << std::boolalpha << easyfind(vec, 5) << std::endl;
	std::cout << "output: " << std::boolalpha << easyfind(vec, 6) << std::endl;
	std::cout << "output: " << std::boolalpha << easyfind(vec, 7) << std::endl;
}