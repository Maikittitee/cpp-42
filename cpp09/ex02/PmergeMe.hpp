#ifndef PMERGEME_HPP
#	define PMERGEME_HPP

#	include <iostream>
#	include <vector>
#	include <deque>


struct pair_t
{
	unsigned int	first, second;
};

void	mergeInsertSort(std::vector<unsigned int> & nums);


void	mergeSort(std::vector<int> &vec, size_t start, size_t end);
void	merge(std::vector<int> &vec, size_t start, size_t middle, size_t end);
void	insertionSort(std::vector<int> &vec);

std::ostream &operator<<(std::ostream &os, const std::vector<pair_t> & pairs);
std::ostream &operator<<(std::ostream &os, const std::vector<unsigned int> & nums);
std::ostream &operator<<(std::ostream &os, const pair_t & pair);

#endif