#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &other);
		
		~Cat(void);
		Cat& operator=(const Cat &other);

	protected:
		std::string __type;
}

#endif