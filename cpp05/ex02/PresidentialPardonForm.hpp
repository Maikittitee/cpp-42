#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{

	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		// getter
		const std::string get_target() const ;

	private:
		std::string _target;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ******************************************* PresidentialPardonForm_H */