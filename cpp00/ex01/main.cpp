#include "phonebook.hpp"

std::string toLower(std::string s)
{
	for (int i = 0; i < int(s.length()); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}
	return (s);
}

int	main(void)
{
	PhoneBook pb;
	std::string  input;

	while (true && !std::cin.eof())
	{
		std::cout << "not minishell $> ";
		getline(std::cin, input);
		input = toLower(input);
		if (input.compare("add") == 0)
			pb.add();
		else if (input.compare("search") == 0)
			pb.search();
		else if (input.compare("exit") == 0)
			exit(0);
		else
			std::cout << "cmd not found" << std::endl;  
	}
	return (0);
}