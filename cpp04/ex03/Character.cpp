#include "Character.hpp"

Character::Character(const std::string name)
{
	_name = name;
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	_count = 0;
}

Character::Character(const Character &from)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	_count = 0;
	*this = from;
}

Character::~Character()
{
	for (int i = 0; i < _count; ++i)
		delete _inventory[i];
}

Character		&Character::operator=(const Character &rvalue)
{
	if (this != &rvalue)
	{
		for (int i = 0; i < _count; ++i)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
		for (int i = 0; i < rvalue.getCount(); ++i)
			_inventory[i] = rvalue.getMateria(i)->clone();
	}
	_count = rvalue.getCount();
	_name = rvalue.getName();
	return (*this);
}

std::string const	&Character::getName() const
{
	return (_name);
}

int					Character::getCount() const
{
	return (_count);
}

AMateria			*Character::getMateria(int idx) const
{
	if (idx > 3 || idx < 0 || idx > _count - 1)
		return NULL;
	return (_inventory[idx]);
}

void				Character::equip(AMateria* m)
{
	if (m == NULL || _count == 4)
		return ;
	_inventory[_count++] = m;
}

void				Character::unequip(int idx)
{
	if (idx > 3 || idx < 0 || idx > _count - 1)
		return ;
	_inventory[idx] = NULL;
	for (int i = 0; i < 3; ++i)
		if (_inventory[i] == NULL)
			_inventory[i] = _inventory[i + 1];
	--_count;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0 || idx > _count - 1)
		return ;
	_inventory[idx]->use(target);
}

