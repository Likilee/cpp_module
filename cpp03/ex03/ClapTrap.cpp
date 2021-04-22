#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_name = "BOT";
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	std::cout << "CL4P-TP <" << _name << "> is made!" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_name = name;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	std::cout << "CL4P-TP <" << _name << "> is made!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &from)
{
	*this = from;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP <" << _name << "> Pung~~~~~!!! BYE" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rvalue)
{
	if (this != &rvalue)
		_name = rvalue.getName();
	return (*this);
}

const std::string	&ClapTrap::getName() const
{
	return (_name);
}

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CL4P-TP <" << _name << "> attacks <" << target
				<< "> at range, causing <" << _ranged_attack_damage
				<< "> points of damage!(range)" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "CL4P-TP <" << _name << "> attacks <" << target
				<< "> at melee, causing <" << _melee_attack_damage
				<< "> points of damage!(melee)" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int		damage = amount - _armor_damage_reduction;

	if (damage < 0)
		damage = 0;
	if (_hit_points < damage)
		damage = _hit_points;
	_hit_points -= damage;
	std::cout << "CL4P-TP <" << _name << "> take damage <" << damage << ">" << std::endl;

}

void		ClapTrap::beRepaired(unsigned int amount)
{
	int		repair = amount;

	if (repair < 0)
		repair = 0;
	if (repair > _max_hit_points - _hit_points)
		repair = _max_hit_points - _hit_points;
	_hit_points += repair;
	std::cout << "CL4P-TP <" << _name << "> is repaired <" << repair << "> hit points is <" << _hit_points << ">" << std::endl;
}
