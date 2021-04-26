#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &from) : Enemy(from)
{
	std::cout << "* click click click *"  << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion		&RadScorpion::operator=(const RadScorpion &rvalue)
{
	Enemy::operator=(rvalue);
	return (*this);
}

void			RadScorpion::takeDamage(int damage)
{
	if (this->getHP() == 0)
		std::cout << this->getType() << " is already Destroyed" << std::endl;
	else
	{
		Enemy::takeDamage(damage - 3);
		if (this->getHP() == 0)
		std::cout << "* SPROTCH *" << std::endl;
	}
}
