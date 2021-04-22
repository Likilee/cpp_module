#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>

class ScavTrap
{
private:
	int			_hit_points;
	int			_max_hit_points;
	int			_energy_points;
	int			_max_energy_points;
	int			_level;
	std::string	_name;
	int			_melee_attack_damage;
	int			_ranged_attack_damage;
	int			_armor_damage_reduction;
public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(const ScavTrap &from);
	~ScavTrap();
	ScavTrap			&operator=(const ScavTrap &rvalue);

	const std::string	&getName() const;
	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				challengeNewcomer();
};

#endif
