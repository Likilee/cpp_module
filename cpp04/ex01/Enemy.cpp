#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
			:	_hp(hp), _type(type)
{
}

Enemy::Enemy(const Enemy &from)
{
	*this = from;
}

Enemy::~Enemy()
{
}

Enemy		&Enemy::operator=(const Enemy &rvalue)
{
	if (this != &rvalue)
	{
		_hp = rvalue.getHP();
		_type = rvalue.getType();
	}
	return (*this);
}

int Enemy::getHP() const
{
	return (_hp);
}

std::string const &Enemy::getType() const
{
	return (_type);
}

void		Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		if (_hp < damage)
			damage = _hp;
		_hp -= damage;
	}
}
