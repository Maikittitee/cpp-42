#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array() : _size(1), _array(new T()) {}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n]) {}

template<typename T>
Array<T>::Array(Array const& other) : _size(other._size) {
	this->_array = new T[_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
}

template<typename T>
Array<T>&	Array<T>::operator=(Array const& rhs) {
	if (this != &rhs)
	{
		this->_size = rhs._size;
		delete [] this->_array;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
	}
	return *this;
}

template<typename T>
Array<T>::~Array() {
	delete [] _array;
}

template<typename T>
unsigned int	Array<T>::size() const {
	return this->_size;
}

template<typename T>
T&	Array<T>::operator[](long int index) const
{
	if (index < 0 || index >= static_cast<unsigned int>(this->_size))
		throw OutOfRangeException();
	return this->_array[index];
}

#endif