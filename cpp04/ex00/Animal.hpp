#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal{
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &other);
		
		~Animal(void);
		Animal& operator=(const Animal &other);

		// getter / setter
		void	setType(std::string type);

		// member function
		void	makeSound(void);
		

	protected:
		std::string __type;
};

#endif
