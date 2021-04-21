#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
class HumanA
{
private:
	Weapon		&_weapon;
	std::string	_name;
public:
	HumanA(std::string name, Weapon &weapon);
	void	attack();
};

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
}

void	HumanA::attack()
{
	std::cout << _name << " attacked with [" << _weapon.getType() << "]" << std::endl;
}

#endif
