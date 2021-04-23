#include "Peon.hpp"

Peon::Peon(const Peon &from): Victim(from)
{
	*this = from;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon		&Peon::operator=(const Peon &rvalue)
{
	if (this != &rvalue)
		_name = rvalue.getName();
	return (*this);
}

void		Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
