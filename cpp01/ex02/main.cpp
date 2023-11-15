#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;


	std::cout << "address of str:\t"<< &str << std::endl; 
	std::cout << "stringPTR held addr:\t"<< stringPTR << std::endl; 
	std::cout << "stringREF held addr:\t"<< &stringREF << std::endl;

	std::cout << "The value of the string variable:\t" << str <<std::endl;
	std::cout << "The value pointed to by stringPTR:\t" << *stringPTR <<std::endl;
	std::cout << "value of str:\t" << stringREF <<std::endl;

}