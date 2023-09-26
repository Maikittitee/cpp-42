#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add(void);
		void search(void);
	private:
		int	current_index;
		int max_index;
		bool isInputError(std::string input[5]);
		void display(void);
		Contact contact[8];

};

#endif