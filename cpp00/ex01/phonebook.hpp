#include <iostream>

class Contact {
	public:
		string firstname;
		string lastname;
		string nickname;
		string phone;
		string secret;
}

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		add(void);
		search(void);
		display(void);
		static int	current_index;
	private:
		Contact contact[8];

};