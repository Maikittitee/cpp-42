#include "PmergeMe.hpp"
#include <cstdlib>
#include <ctime>

static std::vector<unsigned int> randomn_uint(size_t n){
	    
	std::vector<unsigned int> result;

    std::srand(std::time(0));

    for (size_t i = 0; i < n; ++i) {
        unsigned int randomValue = static_cast<unsigned int>(std::rand()) % 10;
        result.push_back(randomValue);
    }

    return result;	
} 

int	main(){
	std::vector<unsigned int> vec;

	vec = randomn_uint(11);

	std::cout << "Input: " << vec << std::endl;

	mergeInsertSort(vec);
}