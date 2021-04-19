#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	type;
	std::string	randomName();
public:
	ZombieEvent(void);
	virtual ~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	void	randomChump(void);

};

#endif
