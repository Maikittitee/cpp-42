#include "PmergeMe.hpp"

static void mergeSort(std::vector<pair_t> &pairs, size_t start, size_t end);
static void merge(std::vector<pair_t> &pairs, size_t start, size_t middle, size_t end);
static std::vector<pair_t> get_pair(std::vector<unsigned int> & nums);
static void insertionSort(std::vector<unsigned int> &main_chain, std::vector<unsigned int> &pend_chain);

void	mergeInsertSort(std::vector<unsigned int> & nums){
	std::vector<pair_t> pairs;
	std::vector<unsigned int> main_chain;
	std::vector<unsigned int> pend_chain;
	if (nums.size() % 2 != 0){
		pend_chain.push_back(nums.back());
		nums.pop_back();
		std::cout << "last: " << pend_chain[0] << std::endl;
	}	
	pairs = get_pair(nums);
	mergeSort(pairs, 0, pairs.size() - 1);
	std::cout << "pairs: " << pairs << std::endl;

	for (size_t i = 0; i < pairs.size(); i++){
		main_chain.push_back(pairs[i].first);
		pend_chain.push_back(pairs[i].second);
	}
	std::cout << "main: " << main_chain << std::endl;
	std::cout << "pend: " << pend_chain << std::endl;
	insertionSort(main_chain, pend_chain);
	std::cout << main_chain << std::endl;
}

static std::vector<pair_t> get_pair(std::vector<unsigned int> & nums){
	std::vector<pair_t> ret;

	for (size_t i = 0; i < nums.size() - 1; i += 2){
		size_t j = i + 1;
		if (nums[i] < nums[j])
			ret.push_back((pair_t){nums[i], nums[j]});
		else
			ret.push_back((pair_t){nums[j], nums[i]});
	}

	return (ret);
}

static void mergeSort(std::vector<pair_t> &pairs, size_t start, size_t end){
	if (start >= end)
		return;
	int middle = (end + start) / 2;
	mergeSort(pairs, start, middle);
	mergeSort(pairs, middle + 1, end);
	merge(pairs, start, middle, end);
}

static void merge(std::vector<pair_t> &pairs, size_t start, size_t middle, size_t end){
	std::vector<pair_t> left(pairs.begin() + start, pairs.begin() + middle + 1);
	std::vector<pair_t> right(pairs.begin() + middle + 1, pairs.begin() + end + 1);
	
	std::vector<pair_t>::iterator it1 = left.begin();
	std::vector<pair_t>::iterator it2 = right.begin();

	for (size_t i = start; i < end + 1; i++){
		if (it1 == left.end() && it2 != right.end())
			pairs[i] = *(it2++);
		else if (it1 != left.end() && it2 == right.end())
			pairs[i] = *(it1++);
		else if (it1->first < it2->first)
			pairs[i] = *(it1++);
		else
			pairs[i] = *(it2++);
	}

}

static void insertionSort(std::vector<unsigned int> &main_chain, std::vector<unsigned int> &pend_chain) {
    for (size_t i = 0; i < pend_chain.size(); ++i) {
        unsigned int key = pend_chain[i];
        std::vector<unsigned int>::iterator it = main_chain.begin();
        while (it != main_chain.end() && *it < key) {
            ++it;
        }
        main_chain.insert(it, key);
    }
}
std::ostream &operator<<(std::ostream &os, const std::vector<unsigned int> & nums){
	size_t i;
	for (i = 0; i < nums.size() - 1; i++){
		os << nums[i] << ", ";
	}
	os << nums[i];
	return (os);
}

std::ostream &operator<<(std::ostream &os, const std::vector<pair_t> & pairs){
	size_t i;
	for (i = 0; i < pairs.size() - 1; i++){
		os << pairs[i] << ", ";
	}
	os << pairs[i];
	return (os);
}

std::ostream &operator<<(std::ostream &os, const pair_t & pair){
	os << "(" << pair.first << ", " << pair.second << ")";
	return (os);
}
















// -----------Original---------------

void	mergeSort(std::vector<int> &vec, size_t start, size_t end){
	if (start < end){
		size_t middle = (start + end) / 2;
		std::cout << start << ", " << middle << ", " << end << std::endl;
		mergeSort(vec, start, middle);
		mergeSort(vec, middle + 1, end);
		merge(vec, start, middle, end);
	}
}

void	merge(std::vector<int> &vec, size_t start, size_t middle, size_t end){
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

void	insertionSort(std::vector<int> &vec){
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