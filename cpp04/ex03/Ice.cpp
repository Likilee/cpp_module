#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &from) : AMateria(from)
{
}

Ice::~Ice()
{
}

Ice		&Ice::operator=(const Ice &rvalue)
{
	AMateria::operator=(rvalue);
	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
