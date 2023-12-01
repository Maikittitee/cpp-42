#ifndef DOG_HPP
# define DOG_HPP

# include "AbAnimal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Dog : public AbAnimal
{
	public:
		Dog(void);
		Dog(const Dog &other);
		
		~Dog(void);
		Dog& operator=(const Dog &other);

		void makeSound(void) const ;

	protected:
		std::string __type;


	private:
		Brain* _brain;
};

#endif