#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = "BOT_FRAG";
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "FR4G-TP <" << _name << "> Get ready for some Fragtrap face time!" << std::endl;
}

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
	std::cout << "FR4G-TP <" << _name << "> Get ready for some Fragtrap face time!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &from)
{
	*this = from;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << _name << "> I'll be back.....!!!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rvalue)
{
	if (this != &rvalue)
		_name = rvalue.getName();
	return (*this);
}

const std::string	&FragTrap::getName() const
{
	return (_name);
}

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target
				<< "> at range, causing <" << _ranged_attack_damage
				<< "> points of damage!(range)" << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target
				<< "> at melee, causing <" << _melee_attack_damage
				<< "> points of damage!(melee)" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	int		damage = amount - _armor_damage_reduction;

	if (damage < 0)
		damage = 0;
	if (_hit_points < damage)
		damage = _hit_points;
	_hit_points -= damage;
	std::cout << "FR4G-TP <" << _name << "> take damage <" << damage << ">" << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	int		repair = amount;

	if (repair < 0)
		repair = 0;
	if (repair > _max_hit_points - _hit_points)
		repair = _max_hit_points - _hit_points;
	_hit_points += repair;
		std::cout << "FR4G-TP <" << _name << "> is repaired <" << repair << "> hit points is <" << _hit_points << ">" << std::endl;
}

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
