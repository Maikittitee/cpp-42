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
	std::deque<unsigned int> que;

	vec = randomn_uint(11);
	for (size_t i = 0; i < vec.size(); i++){
		que.push_back(vec[i]);
	}

	std::cout << "Input: " << vec << std::endl;
	std::cout << "Input: " << que << std::endl;

	mergeInsertSort(vec);
	std::cout << vec << std::endl;

	mergeInsertSort(que);
	std::cout << que << std::endl;
}