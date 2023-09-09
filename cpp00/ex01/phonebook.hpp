#include <iostream>

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
		void show_contact(void);
};

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