#ifndef RPN_HPP
#	define RPN_HPP

#	include <iostream>
#	include <stack>
#	include <string>
#	include <algorithm>
#	include <cstdlib>
#	include <sstream>


class RPN {
	public:
		RPN(std::string rpn);
		RPN(const RPN &other);
		RPN& operator=(const RPN &rhs);
		~RPN();
		bool evaluate();
	private:
		std::stack<float>	_stack;
		std::string			_postfix;

		bool	_isNumbers(std::string str);
		bool	_isOperator(std::string str);
};

std::ostream &operator<<(std::ostream &os, const std::stack<float> &stack);


#endif