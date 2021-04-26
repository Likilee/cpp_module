#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;
	Character();

public:
	Character(std::string const &name);
	Character(const Character &from);
	~Character();
	Character	&operator=(const Character &rvalue);

	void recoverAP();
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);

	std::string const	&getName() const;
	int	const			&getAP() const;
	AWeapon				*getWeapon() const;
};

std::ostream	&operator<<(std::ostream &out, Character &character);

#endif
