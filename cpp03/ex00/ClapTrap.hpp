#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap{
	public:
		ClapTrap( std::string name );
		ClapTrap ( const ClapTrap &other);
		ClapTrap& operator= (const ClapTrap &ct);
		~ClapTrap( void );
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getHP();
		int	getEP();
		int	getAD();

		void	printStatus(void);
		void setName(std::string name);
	private:
		std::string _name;
		int	_hp;
		int	_ep;
		int	_ad;


};

#endif