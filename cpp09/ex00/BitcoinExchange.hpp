#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP 

# include <iostream>
# include <map>
# include <fstream>
# include <string>
# include <cstdlib>
# include <limits>

typedef	std::map<std::string, float>	date_price_t;

enum month_e
{
	Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

struct date_num_t
{
	std::string	date;
	std::string	num;
};

class BTC{
	private:
		date_price_t	_database;
		std::string		_lowestDate;

		void	_setDatabase(std::string filename);
		float	_getPrice(const std::string& date) const;
	
	public:
		BTC(std::string filename);
		BTC(BTC const& other);
		BTC&	operator=(BTC const& rhs);
		~BTC();
		date_price_t getDatabase(void) const;

		void	evaluate(char* fileName) const;

		// Exception
		class NoDataBase : public std::exception {
			const char* what() const throw() {return "Error: there aren't database csv.";}
		};
		class CouldNotOpenFile : public std::exception {
			const char* what() const throw() {return "Error: could not open file.";}
		};

};

std::ostream &operator<<(std::ostream &os, const date_price_t &date_price);

#endif