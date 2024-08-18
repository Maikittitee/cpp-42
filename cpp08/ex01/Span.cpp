#include "Span.hpp"

Span::Span(unsigned int const n): _maxn(n), _index(0) {}


Span::Span(Span const& other): _maxn(other._maxn), index(other.index), _vec(other._vec) {}


Span&	Span::operator=(Span const& rhs) {
	if (this != &rhs){
		this->_maxn = rhs._maxn;
		this->_index = rhs._index;
		this->_vec = rhs._vec;
	}
	return (*this);
}

Span::~Span(){}

void Span::AddNumber(int n){
	if (_vec.size() < _maxn)
		_vec.push_back(n);
}

unsigned int	Span::shortestSpan(){
	
	if (_vec.size() == 0)
		throw Span::SpanEmpty();
	if (_vec.size() == 1)
		throw Span::OneNumber();

	std::vector<int> tmp = _vec;
	std::vector<int>::iterator max_iter = std::max_element(tmp);
	if (max_iter == tmp.end())
		throw Span::SpanEmpty();
	int max1 = *max_iter;

	tmp.erase(max_iter)
	max_iter = std::max_element(tmp);
	if (max_iter == tmp.end())
		throw Span::OneNumber();
	int max2 = *max_iter;

	std::cout << "max1: " << max1 << ", max2: " << max2 << std::endl;	

}

unsigned int	Span::longestSpan(){

}

unsigned int	Span::size() const{
}
