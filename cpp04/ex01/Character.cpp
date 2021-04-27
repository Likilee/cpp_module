#include "Character.hpp"

Character::Character(std::string const &name)
				: _name(name), _ap(40), _weapon(NULL)
{
}

Character::Character(const Character &from)
{
	*this = from;
}

Character::~Character()
{
}

Character		&Character::operator=(const Character &rvalue)
{
	if (this != &rvalue)
	{
		_name = rvalue.getName();
		_ap = rvalue.getAP();
		_weapon = rvalue.getWeapon();
	}
	return (*this);
}

void	Character::recoverAP()
{
	_ap += 10;
	if (this->getAP() > 40)
		_ap = 40;
}

void	Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (this->getWeapon() != NULL && this->getWeapon()->getAPCost() < this->getAP())
	{
		std::cout << this->getName() << " attack " << enemy->getType() << " with a "
					<< this->getWeapon()->getName() << std::endl;
		this->getWeapon()->attack();
		enemy->takeDamage(this->getWeapon()->getDamage());
		_ap -= this->getWeapon()->getAPCost();
	}
}

std::string const	&Character::getName() const
{
	return (_name);
}

int	const			&Character::getAP() const
{
	return (_ap);
}

AWeapon				*Character::getWeapon() const
{
	return (_weapon);
}

//<<
std::ostream	&operator<<(std::ostream &out, Character &character)
{
	out << character.getName() << " has " << character.getAP() << " AP and ";
	if (character.getWeapon() == NULL)
		out << "is unarmed";
	else
		out << "wields a " << character.getWeapon()->getName();
	out << std::endl;
	return (out);
}
