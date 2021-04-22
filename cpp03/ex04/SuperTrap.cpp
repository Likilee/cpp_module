#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	_hit_points = 100; //Frag
	_max_hit_points = 100; //Frag
	_level = 1;
	_name = "BOT_SUPER";
	_ranged_attack_damage = 20; // Frag
	_armor_damage_reduction = 5; // Frag
	std::cout << "SP4V-TP <" << _name << "> I'm Suuuuuupeeeeeerrr~~ " << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	_hit_points = 100; //Frag
	_max_hit_points = 100; //Frag
	_level = 1;
	_name = name;
	_ranged_attack_damage = 20; // Frag
	_armor_damage_reduction = 5; // Frag
	std::cout << "SP4V-TP <" << _name << "> I'm Suuuuuupeeeeeerrr~~ " << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &from) : ClapTrap(from), FragTrap(from), NinjaTrap(from)
{
	*this = from;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SP4V-TP <" << _name << "> Suuuuper is never die.. BYE" << std::endl;

}

SuperTrap	&SuperTrap::operator=(const SuperTrap &rvalue)
{
	if (this != &rvalue)
		_name = rvalue.getName();
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}
void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
