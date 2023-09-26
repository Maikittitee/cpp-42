#include <iostream>
#include <string>
# include <sstream>
#include <iomanip>
class Contact {
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone;
		std::string secret;
		std::string get_firstname(void);
		std::string get_lastname(void);
		std::string get_nickname(void);
		std::string get_phone(void);
		std::string get_secret(void);
		void set_data(std::string input[5]);
		void show_contact(int mode, std::string index);
};

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add(void);
		void search(void);
		int	current_index;
		int max_index;
	private:
		bool isInputError(std::string input[5]);
		void display(void);
		Contact contact[8];

};