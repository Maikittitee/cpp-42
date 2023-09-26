#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

class Contact {
	public:
		std::string get_firstname(void);
		std::string get_lastname(void);
		std::string get_nickname(void);
		std::string get_phone(void);
		std::string get_secret(void);
		void set_data(std::string input[5]);
		void show_contact(int mode, std::string index);
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phone;
		std::string _secret;
};

#endif