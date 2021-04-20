#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie	*zombie_horde;
public:
	ZombieHorde(int N);
	~ZombieHorde();
};

#endif
