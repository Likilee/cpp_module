#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_energy_points = 100;
	_max_energy_points = 100;
	_name += "_FRAG";
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "FR4G-TP <" << _name << "> Get ready for some Fragtrap face time!" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	_energy_points = 100;
	_max_energy_points = 100;
	_name = name;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "FR4G-TP <" << _name << "> Get ready for some Fragtrap face time!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &from) : ClapTrap(from)
{
	*this = from;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << _name << "> I'll be back.....!!!" << std::endl;
}

// FragTrap	&FragTrap::operator=(const FragTrap &rvalue)
// {
// 	if (this != &rvalue)
// 		_name = rvalue.getName();
// 	return (*this);
// }

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int			i;
	std::string	attack_message[] = {
		"Kick Him While He's Down",
		"You're... GOING TO LOVE ME!!",
		"Livin' Near the Edge",
		"Take that shit!",
		"Throwing grenade!",
		"Eat bomb, baddie!"
	};

	if (_energy_points < 25)
		std::cout << "FR4G-TP <" << _name << "> has not enough energy <" << _energy_points << ">" << std::endl;
	else
	{
		_energy_points -= 25;
		i = rand() % 6;
		std::cout << "FR4G-TP <" << _name << "> " << attack_message[i] << ", target <" << target << "> ep <" << _energy_points << ">" << std::endl;
	}
}
