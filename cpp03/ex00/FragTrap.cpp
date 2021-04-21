#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = name;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "Get ready for some Fragtrap face time!" << std::endl;
}

FragTrap::~FragTrap()
{
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target
				<< "> at range, causing <" << _ranged_attack_damage
				<< "> points of damage!(range)" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target
				<< "> at range, causing <" << _ranged_attack_damage
				<< "> points of damage!(melee)" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int		damage = amount - _armor_damage_reduction;

	if (damage < 0)
		damage = 0;
	if (_hit_points < damage)
		damage = _hit_points;
	_hit_points -= damage;
	std::cout << "FR4G-TP take damage <" << damage << ">" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int		repair = amount;

	if (repair < 0)
		repair = 0;
	if (repair > _max_hit_points - _hit_points)
		repair = _max_hit_points - _hit_points;
	_hit_points += repair;
	std::cout << "FR4G-TP is repaired <" << repair << ">" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int		i;

	std::string	attack_name[] = {
		"Grenade!",
		"Hot potato!",
		"Pull pin, throw!",
		"Take that!",
		"Throwing grenade!",
		"Eat bomb, baddie!"
	}
	i = rand() % 6
}
