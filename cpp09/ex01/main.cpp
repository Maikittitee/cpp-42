#include "RPN.hpp"

int main(int ac, char **av){
	if (ac != 2)
		exit(1);
	
	RPN rpn(av[1]);
	rpn.evaluate();
}