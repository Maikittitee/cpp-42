#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137),_target(target) 
{
	std::cout << "Shrubbery Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): AForm(src), _target(src._target)
{
	std::cout << "Strubbery Copy Constructor Called"  << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Strubbery Destructor Called"  << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this == &rhs )
		return (*this);
	AForm::operator=(rhs);
	_target  = rhs._target;
	return (*this);

}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << "[shrubeberry]" << i.get_target() << "sign required:" << i.get_sign_grade() << " exe req:" << i.get_exec_grade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	std::ofstream	outfile;
	std::string		filename;

	if (!this->get_is_sign())
		throw AForm::IsNotSignException();
	if (executor.get_grade() > this->get_exec_grade())
		throw AForm::GradeTooLowException();
	filename = this->_target+"_shrubbery";
	outfile.open(filename);
	// if (!outfile.is_open())
		// throw cannot open file;
	outfile << "                                                         ." << std::endl;
	outfile << "                                              .         ;  " << std::endl;
	outfile << "                 .              .              ;%     ;;   " << std::endl;
	outfile << "                   ,           ,                :;%  %;   " << std::endl;
	outfile << "                    :         ;                   :;%;'     .,   " << std::endl;
	outfile << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	outfile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	outfile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	outfile << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	outfile << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	outfile << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	outfile << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	outfile << "                      `@%:.  :;%.         ;@@%;' " << std::endl;
	outfile << "                        `@%.  `;@%.      ;@@%;    " << std::endl;
	outfile << "                          `@%%. `@%%    ;@@%;  " << std::endl;
	outfile << "                            ;@%. :@%%  %@@%;" << std::endl;
	outfile << "                              %@bd%%%bd%%:;  " << std::endl;
	outfile << "                                #@%%%%%:;;" << std::endl;
	outfile << "                                %@@%%%::;" << std::endl;
	outfile << "                                %@@@%(o);  . '        " << std::endl;
	outfile << "                                %@@@o%;:(.,'         " << std::endl;
	outfile << "                            `.. %@@@o%::;         " << std::endl;
	outfile << "                               `)@@@o%::;    " << std::endl;
	outfile << "                                %@@(o)::;     " << std::endl;
	outfile << "                               .%@@@@%::;       " << std::endl;
	outfile << "                               ;%@@@@%::;.      " << std::endl;
	outfile << "                              ;%@@@@%%:;;;. " << std::endl;
	outfile << "                          ...;%@@@@@%%:;;;;,..    " << std::endl;



}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string ShrubberyCreationForm::get_target(void) const { return _target;}

/* ************************************************************************** */