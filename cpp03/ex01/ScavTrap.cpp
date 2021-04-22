 #include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_name = "BOT_SCAV";
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	std::cout << "SC4V-TP <" << _name << "> Time to Scavtrap works!" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
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

const std::string	&ScavTrap::getName() const
{
	return (_name);
}


void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP <" << _name << "> hits <" << target
				<< "> by Sniper rifle <" << _ranged_attack_damage
				<< "> points of damage!(range)" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP <" << _name << "> stabs <" << target
				<< "> with fork <" << _melee_attack_damage
				<< "> points of damage!(melee)" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	int		damage = amount - _armor_damage_reduction;

	if (damage < 0)
		damage = 0;
	if (_hit_points < damage)
		damage = _hit_points;
	_hit_points -= damage;
	std::cout << "SC4V-TP <" << _name << "> take damage <" << damage << ">" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	int		repair = amount;

	if (repair < 0)
		repair = 0;
	if (repair > _max_hit_points - _hit_points)
		repair = _max_hit_points - _hit_points;
	_hit_points += repair;
		std::cout << "SC4V-TP <" << _name << "> is repaired <" << repair << "> hit points is <" << _hit_points << ">" << std::endl;
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
