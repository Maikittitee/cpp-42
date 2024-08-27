#include "PmergeMe.hpp"

int	main(){
	std::vector<int> vec;

	vec.push_back(5);
	vec.push_back(4);
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(9);
	vec.push_back(3);

	std::cout << vec[0] << std::endl;
	std::cout << vec[1] << std::endl;
	std::cout << vec[2] << std::endl;
	std::cout << vec[3] << std::endl;
	std::cout << vec[4] << std::endl;
	std::cout << vec[5] << std::endl;

	std::cout << "----" << std::endl;

	MergeSort(vec, 0, vec.size() - 1);

	std::cout << vec[0] << std::endl;
	std::cout << vec[1] << std::endl;
	std::cout << vec[2] << std::endl;
	std::cout << vec[3] << std::endl;
	std::cout << vec[4] << std::endl;
	std::cout << vec[5] << std::endl;
}