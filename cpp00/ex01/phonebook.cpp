#include "phonebook.hpp"

void	printInLength(std::string s, int lenght)
{
	int space;

	if (s.length() > lenght)
	{
		std::cout << s.substr(0, lenght - 1) << '.' << '|';
	}
	else
	{
		space = lenght - s.length();
		for (int i = 0; i < space; i++)
			std::cout << ' ';
		std::cout << s << '|';
	}
	
}

void	Contact::set_data(std::string input[])
{
	this->firstname = input[0];	
	this->lastname = input[1];	
	this->nickname = input[2];	
	this->phone = input[3];	
	this->secret = input[4];	
}

void	Contact::show_contact(int mode, std::string index)
{
	if (mode == 0)
	{
		std::cout << '|';
		printInLength(index, 10);
		printInLength(this->firstname, 10);
		printInLength(this->lastname, 10);
		printInLength(this->nickname, 10);
		std::cout << std::endl;
	}
}

std::string Contact::get_firstname(void)
{
	return (this->firstname);
}

std::string Contact::get_lastname(void)
{
	return (this->lastname);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_phone(void)
{
	return (this->phone);
}

std::string Contact::get_secret(void)
{
	return (this->secret);
}

PhoneBook::PhoneBook(void){
	std::cout << "PhoneBook was created" << std::endl;
}

PhoneBook::~PhoneBook(void){
	std::cout << "PhoneBook was destroyed!!" << std::endl;
}

bool isAllSpace(std::string str)
{
	if (str.length() == 0)
		return (true);
	for (int i = 0; i < str.length(); i++)
	{
		if (!isspace(str[i]))
			return (false);
	}
	return (true);
}

bool PhoneBook::isInputError(std::string input[5])
{
	for (int i = 0; i < 5; i++)
	{
		if (isAllSpace(input[i]))
			return (true);
	}

	return (false);
}

void PhoneBook::add(void) {
	std::string input[5];

	std::cout<< "firstname ";
	std::getline(std::cin, input[0]);
	std::cout<< "lastname: ";
	std::getline(std::cin, input[1]);
	std::cout<< "nickname: ";
	std::getline(std::cin, input[2]);
	std::cout<< "number: ";
	std::getline(std::cin, input[3]);
	std::cout<< "darkest secret: ";
	std::getline(std::cin, input[4]);
	if (this->isInputError(input))
		std::cout << "STDIN ERROR" << std::endl;
	else
	{
		this->contact[current_index].set_data(input);
		current_index++;
		if (max_index < 8)
			max_index++;
		current_index %= 8;
	}

}

bool isStrDigit(std::string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (!isdigit(s[i]))
			return (false);
	}
	return (true);
}

void	PhoneBook::search(void)
{
	int			i;
	int			target;
	std::string	input;
	std::string eiei[9] = {"0", "1", "2", "3", "4", "5", "6", "7", "8"};

	i = 0;	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index| firstname| lastname | nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < max_index)
	{
		this->contact[i].show_contact(0, eiei[i]);
		i++;
	}
	std::cout << "Enter Index: ";
	getline(std::cin, input);
	if (!isStrDigit(input))
	{
		std::cerr << "Stop It, Get Some Help." << std::endl;
		return ;
	}
	target = stoi(input);
	if (target >= this->current_index)
	{
		std::cerr << "Stop It, Get Some Help." << std::endl;
		return ;
	}
	std::cout << "Firstname: ";
	std::cout << this->contact[target].get_firstname() << std::endl;
	std::cout << "Lastname: ";
	std::cout << this->contact[target].get_lastname() << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->contact[target].get_nickname() << std::endl;
	std::cout << "Phone: ";
	std::cout << this->contact[target].get_phone() << std::endl;
	std::cout << "Secret: ";
	std::cout << this->contact[target].get_secret() << std::endl;	
}