#include "Bureaucrat.hpp"

int	main(void)
{
	// Bureaucrat	test;
	// std::cout << test << std::endl;
	try
	{
		Bureaucrat	obj("Mos");

		// Bureaucrat	obj("Mos", 151);

		// Bureaucrat	obj("Mos", 3);
		// std::cout << obj << std::endl;
		obj.incrementGrade();
		// std::cout << "After increase Grade" << std::endl;
		// std::cout << obj << std::endl;

		// Bureaucrat	obj("Mos", 1);
		// std::cout << obj << std::endl;
		// obj.increaseGrade();

		// Bureaucrat	obj("Mos", 150);
		// std::cout << obj << std::endl;
		// obj.decreaseGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}