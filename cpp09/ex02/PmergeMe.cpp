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
		if (it1 == left.end() && it2 != right.end())
			vec[i] = *(it2++);
		else if (it1 != left.end() && it2 == right.end())
			vec[i] = *(it1++);
		else if (*it1 < *it2)
			vec[i] = *(it1++);
		else
			vec[i] = *(it2++);
	}

}

void	InsertionSort(std::vector<int> &vec){
	size_t n = vec.size();

	for (size_t i = 1; i < n; i++){
		size_t j = i - 1; // j will be 0...n-1
		int target = vec[i];
		while (j >= 0 && vec[j] > target){
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = target;
	}
}