#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_name += "_NINJA";
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	std::cout << "NJ4V-TP <" << _name << "> I'm almost shadow!!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_name = name;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	std::cout << "NJ4V-TP <" << _name << "> I'm almost shadow!!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &from) : ClapTrap(from)
{
	*this = from;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NJ4V-TP <" << _name << "> I'm going back to shadow.. BYE" << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &rvalue)
{
	if (this != &rvalue)
		_name = rvalue.getName();
	return (*this);
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << "NJ4V-TP <" << _name << "> Throws Shoebox!! oh! there is FR4G-TP <"
			<< frag.getName() << ">" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	std::cout << "NJ4V-TP <" << _name << "> Throws Shoebox!! oh! there is SC4V-TP <"
			<< scav.getName() << ">" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout << "NJ4V-TP <" << _name << "> Throws Shoebox!! oh! there is CL4P-TP <"
			<< clap.getName() << ">" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	std::cout << "NJ4V-TP <" << _name << "> Throws Shoebox!! oh! there is NJ4V-TP <"
			<< ninja.getName() << ">" << std::endl;
}
