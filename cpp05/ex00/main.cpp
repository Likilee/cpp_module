#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat francis("Francis", 100);
	std::cout << francis << std::endl;
	francis.increaseGrade();
	std::cout << francis << std::endl;
	francis.decreaseGrade();
	std::cout << francis << std::endl;

	std::cout << "***** Test1 : grade [0] test *****" << std::endl;
	try
	{
		Bureaucrat jack("Jack", 0);
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n***** Test2 : grade [1000] test *****" << std::endl;
	try
	{
		Bureaucrat jack("Jack", 1000);
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n***** Test3 : grade [1] && [increase] test *****" << std::endl;
	try
	{
		Bureaucrat jack("Jack", 1);
		std::cout << jack << std::endl;
		jack.increaseGrade();
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n***** Test4 : grade [150] && [decrease] test *****" << std::endl;
	try
	{
		Bureaucrat jack("Jack", 150);
		std::cout << jack << std::endl;
		jack.decreaseGrade();
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
