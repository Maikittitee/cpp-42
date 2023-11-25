#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal{
	public:
		Animal(void);
		Animal(const Animal &other);
		
		~Animal(void);
		Animal& operator=(const Animal &other);

		// getter / setter
		void	setType();

		// member function
		void	makeSound();
		

	protected:
		std::string __type;
}

#endif
