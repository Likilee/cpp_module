#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	TestZombie()
{
	Zombie	zombie_default;
	Zombie	zombie_custum("Custum_zombie", "Custom");

	zombie_default.anounce();
	zombie_custum.anounce();
	std::cout << std::endl;
}

void	TestZombieEvent()
{
	ZombieEvent	zombie_event;
	Zombie	*zombie_heap;

	zombie_event.setZombieType("Event");
	zombie_heap = zombie_event.newZombie("Heap");
	zombie_heap->anounce();
	delete zombie_heap;
	zombie_event.randomChump();
	std::cout << std::endl;
}

int	main(void)
{
	srand(time(NULL));

	std::cout << "======== Test Zombie class ========\n" << std::endl;
	TestZombie();
	std::cout << "===================================\n" << std::endl;

	std::cout << "===== Test ZombieEvent class ======\n" << std::endl;
	TestZombieEvent();
	TestZombieEvent();
	TestZombieEvent();
	std::cout << "===================================\n" << std::endl;

	return (0);
}
