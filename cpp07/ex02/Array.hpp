#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template<class T>
class Array{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const& other);
		Array&	operator=(Array const& rhs);
		~Array();

		unsigned int	size() const;
		T&	operator[](long int index) const;

		class OutOfRangeException : public std::exception {
			const char* what() const throw() {return "index is out of bounds";}
		};

	private:
		unsigned int	_size;
		T	*_array;
};

#include "Array.tpp"

#endif
