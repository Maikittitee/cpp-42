#include <iostream>
#include <fstream>

bool readFile(char *&buff, std::string const &filename)
{
	std::ifstream file(filename);
	int length;
	file.seekg(0, std::ios::end);

	if (!file.is_open()){
		std::cerr << "Can't Open The File" << std::endl;
		return (false);
	}
	length = file.tellg();

	// std::cout << length << std::endl;

	// create buffer with correct size
	char *buffer = new char[length];
	file.seekg(0, std::ios::beg);
	file.read(buffer, length);
	// std::cout << buffer << std::endl;
	// std::cout << "eiei" << std::endl;
	file.close();
	buff = buffer;
	return (true);

}

bool writeFile(char *&buff, std::string const &filename)
{
	// do replease
	
	std::ofstream file(filename + ".replace");

	if (!file.is_open()){
		std::cerr << "Can't Open The File" << std::endl;
		return (false);
	}
	file << buff;
	return (true);

}



int main() {
	
	std::string filename = "test.txt";
	char *buff;

	readFile(buff ,filename);
	std::cout << buff << std::endl;
	writeFile(buff, filename);

	delete buff;
	return 0;
}
