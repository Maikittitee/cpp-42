# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <exception> 


class D: public Base{};


Base * generate(void){
	srand(time(0));
	int n = rand() % 3;
	switch (n){
		case 0:
			// std::cout << "A" << std::endl;
			return new A;
		case 1:
			// std::cout << "B" << std::endl;
			return new B;
		case 2:
			// std::cout << "C" << std::endl;
			return new C;
	}
	return (NULL);
}

void identify(Base* p){
	if (dynamic_cast<A *>(p))
		std::cout << p << " is pointer of A." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << p << " is pointer of B." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << p << " is pointer of C." << std::endl;
}

void identify(Base& p){
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "p is reference of A" << std::endl;
	} catch (std::exception & e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "p is reference of B" << std::endl;	
	} catch (std::exception & e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "p is reference of C" << std::endl;
	} catch (std::exception & e) {}
}

int	main()
{
	// test A
	Base *ptr1 = new A;
	Base &ref1 = *ptr1;
	identify(ptr1);
	identify(ref1);
	
	// test B
	Base *ptr2 = new B;
	Base &ref2 = *ptr2;
	identify(ptr2);
	identify(ref2);

	// test C
	Base *ptr3 = new C;
	Base &ref3 = *ptr3;
	identify(ptr3);
	identify(ref3);
	
	// test random	
	Base *ptr = generate();
	Base &ref = *ptr;
	identify(ptr);
	identify(ref);

	// delete 
	delete ptr1;
	delete ptr2;
	delete ptr3;
	delete ptr;
}