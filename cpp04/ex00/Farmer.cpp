#include "Farmer.hpp"

Farmer::Farmer(const Farmer &from): Victim(from)
{
	*this = from;
	std::cout << "Go farming~!" << std::endl;
}

Farmer::Farmer(std::string name): Victim(name)
{
	std::cout << "Go farming~!" << std::endl;
}

Farmer::~Farmer()
{
	std::cout << "Why... me?" << std::endl;
}

Farmer		&Farmer::operator=(const Farmer &rvalue)
{
	if (this != &rvalue)
		_name = rvalue.getName();
	return (*this);
}

void		Farmer::getPolymorphed() const
{
	std::cout << _name << " has been turned into a kitty" << std::endl;
}
