#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal{
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &other);
		
		virtual	~Animal(void);
		Animal& operator=(const Animal &other);

		// getter / setter
		void	setType(std::string type);
		std::string getType(void) const ;

		// member function
		virtual void	makeSound(void) const;
		

	protected:
		std::string __type;
};

#endif
