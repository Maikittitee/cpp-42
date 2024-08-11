#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib>
// #include <iostream>

template<typename T>
void	iter(T* array, size_t length, void	(*func)(T&))
{
	// std::cout << "This is iter from single param" << std::endl;
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif
