#include "RPN.hpp"


RPN::RPN(std::string rpn): _postfix(rpn) {

}

RPN::RPN(const RPN &other):  _stack(other._stack), _postfix(other._postfix){

}

RPN& RPN::operator=(const RPN &rhs){
	if (this != &rhs){
		_postfix = rhs._postfix;
		_stack = rhs._stack;
	}
	return (*this);
}

RPN::~RPN(){

}

bool RPN::evaluate(){
	std::string str;
	std::istringstream	iss(_postfix);
	
	do {
		iss >> str;
		// std::cout << "iter: " << str << std::endl;
		// std::cout << _stack << std::endl;
		if (_isNumbers(str))
			_stack.push(std::atoi(str.c_str()));
		else if (_isOperator(str)){
			if (_stack.size() < 2)
				return (false);
			else {
				int n1 = _stack.top();
				_stack.pop();
				int n2 = _stack.top();
				_stack.pop();
				switch (str[0])
				{
				case '+':
					_stack.push(n2 + n1);
					break;
				case '-':
					_stack.push(n2 - n1);
					break;
				case '*':
					_stack.push(n2 * n1);
					break;
				case '/':
					_stack.push(n2 / n1);
					break;
				default:
					break;
				}
			}
		}
	} while (!iss.eof());
	if (_stack.size() != 1)
		return (false);
	std::cout << _stack.top() << std::endl;
	return (true);
}

std::ostream &operator<<(std::ostream &os, const std::stack<int> &stack){
	std::stack<int> tmp;

	tmp = stack;
	unsigned int size = tmp.size();
	os << "+++++++++\n| STACK |\n+-------+" << std::endl;
	for (unsigned int i = 0; i < size; i++){
		os << "|   " << tmp.top() << "   |" << std::endl;
		tmp.pop();
	}
	os << "+++++++++" << std::endl;
	return (os);
}

bool	RPN::_isNumbers(std::string str)
{
	size_t	i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	if (i == 1)
		return true;
	std::cerr << "Error : Numbers must less than 10." << std::endl;
	return (false);
}

bool	RPN::_isOperator(std::string str)
{
	if ((str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/') && !str[1])
		return true;
	else
		return false;
}