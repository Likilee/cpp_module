#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	_name = "Empty Hand";
	_apcost = 0;
	_damage = 1;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
					: _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &from)
{
	*this = from;
}

AWeapon::~AWeapon()
{
}

AWeapon		&AWeapon::operator=(const AWeapon &rvalue)
{
	if (this != &rvalue)
	{
		_name = rvalue.getName();
		_apcost = rvalue.getAPCost();
		_damage = rvalue.getDamage();
	}
	return (*this);
}

std::string const &AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_apcost);
}

int AWeapon::getDamage() const
{
	return (_damage);
}

void				AWeapon::setName(const std::string &name)
{
	_name = name;
}

void				AWeapon::setAPcost(const int &apcost)
{
	_apcost = apcost;
}

void				AWeapon::setDamage(const int &damage)
{
	_damage = damage;
}
