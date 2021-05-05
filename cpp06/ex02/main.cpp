#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *generate(void)
{
	int	i = rand() % 3;
	switch (i)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A type" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B type" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C type" << std::endl;
}

// void identify_from_reference(Base &p) //Using pointer style
// {
// 	identify_from_pointer(&p);
// }

void identify_from_reference(Base &p) //Using reference dynamic casting style
{
	try
	{
		A &tmp = dynamic_cast<A&>(p);
		(void)tmp;
		std::cout << "A type" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		B &tmp = dynamic_cast<B&>(p);
		(void)tmp;
		std::cout << "B type" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		C &tmp = dynamic_cast<C&>(p);
		(void)tmp;
		std::cout << "C type" << std::endl;
	}
	catch (std::exception &e) {}
}

int		main()
{
	srand(time(NULL));

	for (int i = 0; i < 5; ++i)
	{
		std::cout << "*** TEST " << i << " ***" << std::endl;
		Base *p = generate();
		identify_from_pointer(p);
		identify_from_reference(*p);
		delete p;
		std::cout << std::endl;
	}
	return (0);
}
