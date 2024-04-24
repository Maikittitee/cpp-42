#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int	main()
{
	ShrubberyCreationForm f1("home");
	// RobotomyRequestForm f1("home");
	// PresidentialPardonForm f1("home");
	Bureaucrat b1("Mai", 6);

	b1.signForm(f1);
	b1.executeForm(f1);
	std::cout << f1 << std::endl;

}