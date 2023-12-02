#ifndef ABANIMAL_HPP
# define ABANIMAL_HPP

# include <iostream>
# include <string>

class AbAnimal{
	public:
		AbAnimal(void);
		AbAnimal(std::string type);
		AbAnimal(const AbAnimal &other);
		
		~AbAnimal(void);
		AbAnimal& operator=(const AbAnimal &other);

		// getter / setter
		void	setType(std::string type);
		std::string getType(void) const ;

		// member function
		virtual void	makeSound(void) const = 0;
		

	protected:
		std::string __type;
};

#endif
