#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &from);
	~PlasmaRifle();
	PlasmaRifle	&operator=(const PlasmaRifle &rvalue);

	void	attack() const;
};

#endif
