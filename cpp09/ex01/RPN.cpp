#include "RPN.hpp"


RPN::RPN(std::string rpn): _postfix(rpn) {

}

RPN::RPN(const RPN &other): _postfix(other._postfix), _stack(other._stack){

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

}

std::ostream &operator<<(std::ostream &os, const std::stack<std::string> &stack);
