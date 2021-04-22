#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->type = "";
}

ZombieEvent::~ZombieEvent(void)
{}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

std::string	ZombieEvent::randomName(void)
{
	int			i;

	std::string	name[] =
	{
		"Ammo Sponge",
		"Brain Eater",
		"Ghoul",
		"Undead",
		"Necrosapien"
	};
	i = rand() % 5;
	return (name[i]);
}

void	ZombieEvent::randomChump(void)
{
	Zombie	random_one(this->randomName(), this->type);

	random_one.anounce();
}
