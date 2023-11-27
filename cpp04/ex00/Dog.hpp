#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &other);
		
		~Dog(void);
		Dog& operator=(const Dog &other);

		void makeSound(void) const ;

	protected:
		std::string __type;
};

#endif