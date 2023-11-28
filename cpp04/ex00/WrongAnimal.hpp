#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal{
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		
		~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal &other);

		// getter / setter
		void	setType(std::string type);
		std::string getType(void) const ;

		// member function
		void	makeSound(void) const;
		

	protected:
		std::string __type;
};

#endif
