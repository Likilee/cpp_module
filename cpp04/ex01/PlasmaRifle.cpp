#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &from): AWeapon(from)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle		&PlasmaRifle::operator=(const PlasmaRifle &rvalue)
{
	AWeapon::operator=(rvalue);
	return (*this);
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

