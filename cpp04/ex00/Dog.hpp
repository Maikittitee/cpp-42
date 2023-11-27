#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Animal &other);
		
		~Dog(void);
		Dog& operator=(const dog &other);

	protected:
		std::string __type;
}

#endif
