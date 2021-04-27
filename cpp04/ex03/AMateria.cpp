#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	_xp = 0;
	_type = type;
}

AMateria::AMateria(const AMateria &from)
{
	*this = from;
}

AMateria::~AMateria()
{
}

AMateria		&AMateria::operator=(const AMateria &rvalue)
{
	if (this != &rvalue)
	{
		_xp = rvalue.getXP();
		_type = rvalue.getType();
	}
	return (*this);
}

std::string const	&AMateria::getType() const //Returns the materia type
{
	return (_type);
}

unsigned int		AMateria::getXP() const //Returns the Materia's XP
{
	return (_xp);
}

void				AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}
