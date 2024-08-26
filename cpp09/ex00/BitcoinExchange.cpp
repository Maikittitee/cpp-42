#include "BitcoinExchange.hpp"

BTC::BTC(std::string filename){
	_setDatabase(filename);
}

BTC::BTC(BTC const& other): _database(other._database), _lowestDate(other._lowestDate){

}

BTC&	BTC::operator=(BTC const& rhs){
	if (this != &rhs){
		_database = rhs._database;
		_lowestDate = rhs._lowestDate;
	}
	return (*this);
}

BTC::~BTC(){

}

void	ft_strtirm(std::string& str, const char* set);
static bool	validFormat(std::string const& line, date_num_t& input);
static bool	isdate_str(std::string date);
static bool	validNumber(std::string number);
static bool	validDate(std::string date, std::string const lowestDate);

void	BTC::evaluate(char* fileName) const{
	std::ifstream	inputFile;
	date_num_t		input;
	std::string		line;

	std::cout << std::fixed;
	inputFile.open(fileName);
	if (!inputFile.is_open())
		throw CouldNotOpenFile();
	getline(inputFile, line); // Call Head line
	while(getline(inputFile, line)) {
		if (!validFormat(line, input))
			continue ;
		if (!validDate(input.date, _lowestDate))
			continue ;
		if (!validNumber(input.num))
			continue ;
		float output =  _getPrice(input.date) * atof((input.num).c_str());
		std::stringstream output_string;
		output_string << output;
		std::cout << input.date << " => " << input.num\
		<< " = "  << output_string.str() << std::endl;
	}
	inputFile.close();
}


void BTC::_setDatabase(std::string filename){
	std::fstream file;

	file.open(filename.c_str(), std::ios::in);
	if (!file.is_open())
		throw CouldNotOpenFile();
	else {
		std::string content;
        while (std::getline(file, content)) { 
            size_t pos = content.find(",");
			try {
				if (pos != std::string::npos)
					_database[content.substr(0, pos)] = std::atof(content.substr(pos + 1, content.size()).c_str()); 
			}
			catch (std::exception &e){
				std::cerr << e.what() << std::endl;
				file.close();
				throw NoDataBase();
			}
        }
	}
	file.close();
}

float	BTC::_getPrice(const std::string& date) const
{
	date_price_t::const_iterator	it;

	it = _database.find(date);
	if (it == _database.end())
		it = --_database.lower_bound(date);
	return it->second;
}


date_price_t BTC::getDatabase(void) const{
	return (_database);
}

std::ostream &operator<<(std::ostream &os, const date_price_t &date_price){
	std::map<std::string, float>::const_iterator it;

	os << "DATABASE" << std::endl;
	os << "---------" << std::endl;
	for (it = date_price.begin(); it != date_price.end(); it++){
		os << it->first << ": " << it->second << std::endl;
	}
	return (os);
}

bool is_str_all_digit(const std::string &str){
	size_t i = 0;
	size_t dot = 0;
	if (str[i] == '-')
		i++;
	while (isdigit(str[i]) || str[i] == '.'){
		if (str[i] == '.')
			dot++;
		i++;
	}
	if (str[i] == '\0' && dot <= 1 && str[i - 1] != '.' && str[0] != '.')
		return true;
	return false;
}

static bool	validFormat(std::string const& line, date_num_t& input)
{
	std::string	date;
	std::string	number;
	std::size_t	pos;
	
	pos = line.find("|");
	if (pos == std::string::npos){
		std::cerr << "Error: Bad input => " << line << std::endl;
		return (false);
	}
	date = line.substr(0, pos);
	ft_strtirm(date, " \t");
	if (!isdate_str(date)){
		std::cerr << "Error: Bad input => " << line << std::endl;
		return (false);	
	}
	number = line.substr(pos + 1);
	ft_strtirm(number, " \t");
	if (!is_str_all_digit(number)){
		std::cerr << "Error: Bad input => " << line << std::endl;
		return (false);
	}
	input.date = date;
	input.num = number;
	return true;
}



static bool	isdate_str(std::string date)
{
	size_t	i = 0;

	while (isdigit(date[i]))
		i++;
	if (i != 4 || date[i] != '-')
		return false;
	date.erase(0, 5);
	i = 0;
	while (isdigit(date[i]))
		i++;
	if (i != 2 || date[i] != '-')
		return false;
	date.erase(0, 3);
	i = 0;
	while (isdigit(date[i]))
		i++;
	if (i != 2 || date[i] != '\0')
		return false;
	return true;
}

static bool	validNumber(std::string number)
{
	long	num = atol(number.c_str());

	if (num > std::numeric_limits<int>::max() || number.length() >> 11)
		std::cerr << "Error: too large a number." << std::endl;
	else if (num <= 0)
		std::cerr << "Error: not a positive number." << std::endl;
	else
		return true;
	return false;
}

static bool	validDate(std::string date, std::string const lowestDate)
{
	size_t	pos;
	int		year, month, day;

	if (date < lowestDate){
		std::cerr << "No date in dataset" << std::endl;
		return (false);
	}
	pos = date.find('-');
	year = atoi(date.substr(0, pos).c_str());
	date.erase(0, pos + 1);

	pos = date.find('-');
	month = atoi(date.substr(0, pos).c_str());
	date.erase(0, pos + 1);
	
	day = atoi(date.substr(0, date.length()).c_str());
	
	if (year >= 1900 && month >= 1 && month <= 12 && day >= 1 && day <= 31)
	{
		if ((month == Apr || month == Jun || month == Sep || month == Nov)) {
			if (day <= 30)
				return true;
		}
		else if (month == Feb) {
			if (day <= 28)
				return true;
			else if (day == 29) {
				if (year % 4 == 0 && year % 100 != 0)
					return true;
				else if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
					return true;
			}
		}
		else
			return true;
	}
	std::cerr << "Input date is invalid." << std::endl; 
	return (false);
}

void	ft_strtirm(std::string& str, const char* set)
{
	std::size_t	pos;

	pos = str.find_first_not_of(set);
	str = str.substr(pos);
	pos = str.find_last_not_of(set);
	str = str.substr(0, pos + 1);
}