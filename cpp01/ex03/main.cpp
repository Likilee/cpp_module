#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	TestZombieHorde()
{
	ZombieHorde	zombie_horde(10);
}

int	main(void)
{
	srand(time(NULL));
	TestZombieHorde();
	return (0);
}
