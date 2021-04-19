#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "Zombie";
	this->type = "Extra";
}

Zombie::Zombie(std::string name_in, std::string type_in)
{
	this->name = name_in;
	this->type = type_in;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->name << "> I'm dyiiiiiing~~~~" << std::endl << std::endl;
}

void	Zombie::anounce(void)
{
	std::cout << "<" << this->name << " (" << this->type
				<< ")> Braiiiiiiinnnssss..." << std::endl;
}
