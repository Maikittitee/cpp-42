#include "RPN.hpp"

// int main(int ac, char **av){
// 	if (ac != 2)
// 		exit(1);
	
// 	RPN rpn(av[1]);
// 	rpn.evaluate();
// }

int	main(){
	std::stack<char> st;

	st.push('1');
	st.push('2');
	st.push('3');

	std::cout << st << std::endl;
	std::cout << st << std::endl;
	st.push('4');
	std::cout << st << std::endl;
}