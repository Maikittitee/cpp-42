#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

// int	main()
// {
// 	Animal *animals[10];

// 	for (int i = 0 ; i < 5 ; i++){
// 		animals[i] = new Cat;
// 	}
// 	for (int i = 5 ; i < 10 ; i++){
// 		animals[i] = new Cat;
// 	}

// 	for (int i = 0; i < 10; i++){
// 		animals[i]->makeSound();
// 	}

// 	for (int i = 0; i < 10; i++){
// 		delete animals[i];
// 	}

// }

int	main()
{
	Cat mew;
	// Cat muay;

	Cat mew_clone(mew);
	// Cat muay_clone = muay;



	mew_clone.makeSound();

	return (0);


}