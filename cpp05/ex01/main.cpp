#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat b1("Mai", 2);
	Bureaucrat b2("Grammy", 1);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	Form	f1("form1", 2 , 3);

	std::cout << f1 << std::endl;


	b2.signForm(f1);

	std::cout << f1 << std::endl;
}