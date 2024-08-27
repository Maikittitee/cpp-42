#include "PmergeMe.hpp"


void	MergeSort(std::vector<int> &vec, size_t start, size_t end){
	if (start < end){
		size_t middle = (start + end) / 2;
		std::cout << start << ", " << middle << ", " << end << std::endl;
		MergeSort(vec, start, middle);
		MergeSort(vec, middle + 1, end);
		Merge(vec, start, middle, end);
	}
}

void	Merge(std::vector<int> &vec, size_t start, size_t middle, size_t end){
	std::vector<int> left(vec.begin() + start, vec.begin() + middle + 1);
	std::vector<int> right(vec.begin() + middle + 1, vec.begin() + end + 1);
	
	std::vector<int>::iterator it1 = left.begin();
	std::vector<int>::iterator it2 = right.begin();


	for (size_t i = start; i < end + 1; i++){
		std::cout << "it1: " << *it1 << ", it2: " << *it2 << std::endl;
		if (it1 == left.end() && it2 != right.end()){
			vec[i] = *(it2);
			it2++;
		}
		else if (it1 != left.end() && it2 == right.end()){
			vec[i] = *(it1);
			it1 ++;

		}
		else if (*it1 < *it2){
			vec[i] = *(it1);
			it1++;
		}
		else {
			vec[i] = *(it2);
			it2++;
		}
		// std::cout << "now vec index" << i << " => " << vec[i] << std::endl;	
	}

}
