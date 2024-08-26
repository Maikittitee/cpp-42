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

int RPN::evaluate(){
 return (1);
}

std::ostream &operator<<(std::ostream &os, const std::stack<char> &stack){
	std::stack<char> tmp;

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
