 #include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_name += "_SCAV";
	std::cout << "SC4V-TP <" << _name << "> Time to Scavtrap works!" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	_name = name;
	std::cout << "SC4V-TP <" << _name << "> Time to Scavtrap works!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &from)
{
	*this = from;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << _name << "> I had a great time.. BYE" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rvalue)
{
	if (this != &rvalue)
		_name = rvalue.getName();
	return (*this);
}

void		ScavTrap::challengeNewcomer()
{
	std::string	challenge[] = {
		"Ice bucket challenge!",
		"Half Mrathon challenge!!",
		"10000 step walking challenge!!"
	};
	std::cout << "SC4V-TP <" << _name << "> " << challenge[rand() % 3] << std::endl;
}
