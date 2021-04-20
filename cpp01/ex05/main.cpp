#include "Brain.hpp"
#include "Human.hpp"
#include <iostream>

int		main(void)
{
	Brain	brain;

	brain.SetBrain("Egg");

	std::cout << brain.identify() << ":" << std::endl;
	return (0);
}
