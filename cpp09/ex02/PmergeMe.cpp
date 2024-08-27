#include "PmergeMe.hpp"


void	MergeSort(std::vector<int> &vec, size_t start, size_t end){
	if (start < end){
		size_t middle = (start + end) / 2;
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
		if (it1 == left.end() && it2 != right.end())
			vec[i] = *(it2++);
		if (it1 != left.end() && it2 == right.end())
			vec[i] = *(it1++);
		if (*it1 < *it2)
			vec[i] = *(it1++);
		else 
			vec[i] = *(it2++);
		i++;
		
	}

}
