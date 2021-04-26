#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist Rifle", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &from) : AWeapon(from)
{
}

PowerFist::~PowerFist()
{
}

PowerFist		&PowerFist::operator=(const PowerFist &rvalue)
{
	AWeapon::operator=(rvalue);
	return (*this);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

