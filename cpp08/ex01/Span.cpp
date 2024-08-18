#include "Span.hpp"

Span::Span(unsigned int const n): _maxn(n), _index(0) {}


Span::Span(Span const& other): _maxn(other._maxn), _index(other._index), _vec(other._vec) {}


Span&	Span::operator=(Span const& rhs) {
	if (this != &rhs){
		this->_maxn = rhs._maxn;
		this->_index = rhs._index;
		this->_vec = rhs._vec;
	}
	return (*this);
}

Span::~Span(){}

void Span::addNumber(int n){
	if (_vec.size() < _maxn)
		_vec.push_back(n);
}

unsigned int	Span::shortestSpan(){
	
	if (_vec.size() == 0)
		throw Span::SpanEmpty();
	if (_vec.size() == 1)
		throw Span::OneNumber();


}

unsigned int	Span::longestSpan(){
	if (_vec.size() == 0)
		throw Span::SpanEmpty();
	if (_vec.size() == 1)
		throw Span::OneNumber();
	std::vector<int> tmp = _vec;
	std::vector<int>::iterator max_iter = std::max_element(tmp.begin(), tmp.end());
	if (max_iter == tmp.end())
		throw Span::SpanEmpty();
	int max = *max_iter;
	std::vector<int>::iterator min_iter = std::min_element(tmp.begin(), tmp.end());
	if (min_iter == tmp.end())
		throw Span::SpanEmpty();
	int min = *min_iter;

	return (max - min);



	return (1);
}

unsigned int	Span::size() const{
	return (1);
}
