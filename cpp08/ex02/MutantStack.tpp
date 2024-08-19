#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const& other) : std::stack<T>(other) {}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack const& rhs)
{
	if (this != &rhs)
		std::stack<T>::operator=(rhs);
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack() {}

#endif