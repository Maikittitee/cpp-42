#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int	main()
{
	Intern some_intern;

	AForm *f1 = some_intern.makeForm("shrubbery creation", "eiei");
	std::cout << *f1 << std::endl;

}