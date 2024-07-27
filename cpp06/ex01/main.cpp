#include "Serialize.hpp"
#include "Data.hpp"
#include <iostream>

int	main()
{
	Data data;

	data.name = "Mai";
	data.age = 20;
	Data *data_ptr = &data;
	Data *data_ptr2;
	uintptr_t uint_ptr;

	std::cout << "Original: " << data_ptr << std::endl;
	uint_ptr = Serialize::serialize(data_ptr);
	std::cout << "Cvt to uintptr: " << uint_ptr << std::endl;
	data_ptr2 = Serialize::deserialize(uint_ptr);
	std::cout << "Cvt back to Data *: " << data_ptr2 << std::endl;


}