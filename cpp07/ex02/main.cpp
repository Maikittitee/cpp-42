#include "Array.hpp" 
#include <iostream>


int	main() {
	Array<int> arr(10);
	int *checker = new int[10];

	// test assign
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		const int value = rand();
		arr[i] = value;
		checker[i] = value;
	}

	// test print
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Arr: " << arr[i] << ", Checker: " << checker[i] << std::endl; 
	}

	// test exception
	try {
		std::cout << arr[10] << std::endl;
	} catch (const std::exception& e){
		std::cout << e.what() << std::endl;

	}


	delete [] checker;


}
