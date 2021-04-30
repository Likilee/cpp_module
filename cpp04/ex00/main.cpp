#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Farmer.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Farmer park("Park");

	std::cout << robert << jim << joe << park;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(park);
	return 0;
}
