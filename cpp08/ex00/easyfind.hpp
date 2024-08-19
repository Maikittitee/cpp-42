#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
bool easyfind(T& int_container, int target){
	typename T::iterator it = std::find(int_container.begin(), int_container.end(), target);

	if (it != int_container.end())
		return (true);
	return (false);

}


#endif