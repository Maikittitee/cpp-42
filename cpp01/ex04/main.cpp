#include <iostream>
#include <fstream>

typedef std::string  string ;

bool readFile(string &buff, std::string const &filename)
{
	std::ifstream file(filename);
	int length;
	file.seekg(0, std::ios::end);

	if (!file.is_open()){
		std::cerr << "Can't Open The File" << std::endl;
		return (false);
	}
	length = file.tellg();

	char *buffer = new char[length];
	file.seekg(0, std::ios::beg);
	file.read(buffer, length);
	file.close();
	buff = buffer;
	return (true);

}

void	replace_str(std::string &str, std::string s1, std::string s2)
{
	size_t	found_pos = 0;
	int		index = 0;

	if (s1.empty() || s2.empty())
		return ;
	while (true)
	{
		found_pos = str.find(s1, index);
		if (found_pos > str.size())
			break ;
		str.erase(found_pos, s1.length());
		str.insert(found_pos, s2);
		index = found_pos + s2.length();
	}
}

bool writeFile(string &buff, std::string const &filename, std::string s1, std::string s2)
{
	std::ofstream file(filename + ".replace");

	if (!file.is_open()){
		std::cerr << "Can't Open The File" << std::endl;
		return (false);
	}
	replace_str(buff, s1, s2);
	file << buff;
	return (true);

}

int main( int ac, char **argv) 
{
	std::string buff;

	readFile(buff , argv[1]);
	std::cout << buff << std::endl;
	if (ac != 4)
		return (1);
	writeFile(buff, argv[1], argv[2], argv[3]);

	return 0;
}
