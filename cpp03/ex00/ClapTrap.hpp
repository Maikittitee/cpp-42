#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap{
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap ( const ClapTrap &other);
		ClapTrap & operator = (const ClapTrap &ct);
		~ClapTrap( void );
		
	private:
		std::string _name;
		int	_hp;
		int	_ep;
		int	_ad;


};

#endif