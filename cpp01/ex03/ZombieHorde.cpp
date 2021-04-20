#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->zombie_horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		zombie_horde[i].randomChump();
		zombie_horde[i].anounce();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->zombie_horde;
}
