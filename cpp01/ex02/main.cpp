#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	TestZombie()
{
	Zombie	zombie_default;
	Zombie	zombie_custum("Custum_zombie", "Custom");

	zombie_default.anounce();
	zombie_custum.anounce();
}

void	TestZombieEvent()
{
	ZombieEvent	zombie_event;
	Zombie	*zombie_heap;

	zombie_event.setZombieType("Event");
	zombie_heap = zombie_event.newZombie("zombie_heap");
	zombie_heap->anounce();
	delete zombie_heap;
	zombie_event.randomChump();
}

int	main(void)
{
	TestZombie();
	TestZombieEvent();
	return (0);
}
