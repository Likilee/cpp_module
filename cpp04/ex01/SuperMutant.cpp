#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &from) : Enemy(from)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaaargh" << std::endl;
}

SuperMutant		&SuperMutant::operator=(const SuperMutant &rvalue)
{
	Enemy::operator=(rvalue);
	return (*this);
}

void			SuperMutant::takeDamage(int damage)
{
	if (this->getHP() == 0)
		std::cout << this->getType() << " is already Destroyed" << std::endl;
	else
	{
		Enemy::takeDamage(damage - 3);
		if (this->getHP() == 0)
		std::cout << "Aaaargh" << std::endl;
	}
}
