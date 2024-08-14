#include "Span.hpp"

Span::Span(unsigned int const n): _maxn(n), _index(0) {}


Span::Span(Span const& other): _maxn(other._maxn), index(other.index), _vec(other._vec) {}


Span&	operator=(Span const& rhs) {
	if (this != rhs){
		this->_maxn = rhs._maxn;
		this->_index = rhs._index;
		this->_vec = rhs._vec;
	}
	return (*this);
}

Span::~Span(){

}

void Span::AddNumber(int n){

}

unsigned int	Span::shortestSpan(){

}

unsigned int	Span::longestSpan(){

}

unsigned int	Span::size() const{

}
