#include "Sorcerer.hpp"

//Private
void	Sorcerer::ConstructMessage()
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}
void	Sorcerer::DestructorMessage()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

//Default
Sorcerer::Sorcerer(const Sorcerer &from)
{
	*this = from;
	this->ConstructMessage();
}

Sorcerer::Sorcerer(const std::string name, const std::string title)
{
	_name = name;
	_title = title;
	this->ConstructMessage();
}

Sorcerer::~Sorcerer()
{
	this->DestructorMessage();
}

Sorcerer			&Sorcerer::operator=(const Sorcerer &rvalue)
{
	if (this != &rvalue)
	{
		_name = rvalue.getName();
		_title = rvalue.getTitle();
	}
	return (*this);
}

//Extra
const std::string	&Sorcerer::getName() const
{
	return (_name);
}

const std::string	&Sorcerer::getTitle() const
{
	return (_title);
}

void				Sorcerer::announce() const
{
	std::cout << "I am " << _name << ", " << _title << ", and I like ponies!" << std::endl;
}

void				Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

// Global
std::ostream	&operator<<(std::ostream &out, Sorcerer &sorcerer)
{
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}
