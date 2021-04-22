#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	TestZombieHorde(int	i)
{
	ZombieHorde	zombie_horde(i);
	std::cout << std::endl;
}

int	main(void)
{
	srand(time(NULL));

	std::cout << "======== Test ZombieHorde class 3========\n" << std::endl;
	TestZombieHorde(3);
	std::cout << "===================================\n" << std::endl;

	std::cout << "======== Test ZombieHorde class 5========\n" << std::endl;
	TestZombieHorde(5);
	std::cout << "===================================\n" << std::endl;

	return (0);
}
