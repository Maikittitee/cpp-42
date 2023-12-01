#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &other);
		
		~Cat(void);
		Cat& operator=(const Cat &rhs);

		void makeSound(void) const;

	protected:
		std::string __type;

	private:
		Brain *_brain;

};

#endif