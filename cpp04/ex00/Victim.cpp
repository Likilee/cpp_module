#include "Victim.hpp"

//Private
void	Victim::ConstructMessage()
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}
void	Victim::DestructorMessage()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

//Default
Victim::Victim(const Victim &from)
{
	*this = from;
	this->ConstructMessage();
}

Victim::Victim(std::string name): _name(name)
{
	this->ConstructMessage();
}

Victim::~Victim()
{
	this->DestructorMessage();
}

Victim		&Victim::operator=(const Victim &rvalue)
{
	if (this != &rvalue)
		_name = rvalue.getName();
	return (*this);
}

const std::string		&Victim::getName() const
{
	return (_name);
}
void		Victim::announce() const
{
	std::cout << "I'm " << _name << " and I like otters!" << std::endl;

}
void		Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

//Global
std::ostream		&operator<<(std::ostream &out, Victim &victim)
{
	out << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (out);
}
