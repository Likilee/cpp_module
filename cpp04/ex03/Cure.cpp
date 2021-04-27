#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &from) : AMateria(from)
{
}

Cure::~Cure()
{
}

Cure		&Cure::operator=(const Cure &rvalue)
{
	AMateria::operator=(rvalue);
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *"  << std::endl;
}
