#include <iostream>
#include <string>



class Zombie{
	public :
		void announce( void ); 
		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
		void name_setter ( std::string name );
	private:
		std::string _name;

};

Zombie* zombieHorde(int N, std::string name );