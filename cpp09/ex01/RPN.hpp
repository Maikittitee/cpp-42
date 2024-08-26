#ifndef RPN_HPP
#	define RPN_HPP

#	include <iostream>
#	include <stack>
#	include <string>
#	include <algorithm>
#	include <cstdlib>


class RPN {
	public:
		RPN(std::string rpn);
		RPN(const RPN &other);
		RPN& operator=(const RPN &rhs);
		~RPN();
		int evaluate();
	private:
		std::stack<char>	_stack;
		std::string			_postfix;
};

std::ostream &operator<<(std::ostream &os, const std::stack<std::string> &stack);


#endif