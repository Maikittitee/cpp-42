#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat b1("Mai", 2);
	Form	f1("form1", 2 , 3);

	b1.signForm(f1);

}