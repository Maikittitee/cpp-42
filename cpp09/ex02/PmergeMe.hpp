#ifndef PMERGEME_HPP
#	define PMERGEME_HPP

#	include <iostream>
#	include <vector>




void	MergeSort(std::vector<int> &vec, size_t start, size_t end);
void	Merge(std::vector<int> &vec, size_t start, size_t middle, size_t end);
void	InsertionSort(std::vector<int> &vec);

#endif