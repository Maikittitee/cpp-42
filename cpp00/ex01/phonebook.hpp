#include <iostream>

class Contact {
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone;
		std::string secret;
		void set_data(std::string input[]);
}

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add(void);
		void search(void);
		void display(void);
		static int	current_index;
	private:
		Contact contact[8];

};