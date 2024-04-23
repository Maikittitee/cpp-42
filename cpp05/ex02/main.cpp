#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

int	main()
{
	ShrubberyCreationForm f1("home");
	Bureaucrat b1("Mai", 1);

	b1.signForm(f1);
	std::cout << "is sign: " << f1.get_is_sign() << std::endl;

	f1.execute(b1);

}