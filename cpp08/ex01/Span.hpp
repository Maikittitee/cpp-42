#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <vector>
# include <algorithm>
class Span{
	private:
		unsigned int _maxn;
		unsigned int _index;
		std::vector<int> _vec;

	public:
		Span(unsigned int const n);
		Span(Span const& other);
		Span&	operator=(Span const& rhs);
		~Span();
		void AddNumber(int n);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		unsigned int	size() const;
		class SpanFull: public std::exception{
			const char*	what() const throw() {return "Span is full.";}		
		};

		class SpanEmpty: public std::exception{
			const char*	what() const throw() {return "Span is empty.";}		
		};

		class OneNumber: public std::exception{
			const char*	what() const throw() {return "Span length is 1: Can't found ";}		
		};
};


#endif