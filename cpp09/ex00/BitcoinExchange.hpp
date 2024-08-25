#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP 

# include <iostream>
# include <map>
# include <fstream>
typedef	std::map<std::string, float>	date_price_t;

enum month_e
{
	Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

class BTC{
	private:
		date_price_t	_database;
		std::string		_lowestDate;

		void _setDatabase(std::string filename);
	
	public:
		BTC(std::string filename);
		BTC(BTC const& other);
		BTC&	operator=(BTC const& rhs);
		~BTC();

		void	evaluate(char* fileName) const;

		// Exception
		class NoDataBase : public std::exception {
			const char* what() const throw() {return "Error: there aren't database csv.";}
		};
		class CouldNotOpenFile : public std::exception {
			const char* what() const throw() {return "Error: could not open file.";}
		};

};

#endif