#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Cat cat1;
	Dog dog1;

	cat1.makeSound();
	std::cout << "---\n";
	dog1.makeSound();
	return (0);
}