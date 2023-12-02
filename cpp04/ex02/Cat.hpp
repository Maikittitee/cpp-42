#ifndef CAT_HPP
# define CAT_HPP

# include "AbAnimal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Cat : public AbAnimal
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