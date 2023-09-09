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
		std::cout << s << '|'
	}
	
}

void	Contact::set_data(std::string input[])
{
	this->firstname = input[0];	
	this->lastname = input[1];	
	this->nickname = input[2];	
	this->secret = input[3];	
	this->phone = input[4];	
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

void PhoneBook::add(void) {
	std::string input[5];

	std::cout<< "firstname " << std::endl;
	getline(std::cin, input[0]);
	std::cout<< "lastname: " << std::endl;
	getline(std::cin, input[1]);
	std::cout<< "nickname: " << std::endl;
	getline(std::cin, input[2]);
	std::cout<< "darkest secret: " << std::endl;
	getline(std::cin, input[3]);
	std::cout<< "number: " << std::endl;
	getline(std::cin, input[4]);
	// check err here
	this->contact[current_index].set_data(input);
	current_index++;
	current_index %= 8;
}
