
#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl{
	public:
		Harl( void );
		~Harl( void );
		void	complainFilter( std::string level );

	private:
		std::string _level[4];
		void (Harl::*func_ptr[4])(void);
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif

