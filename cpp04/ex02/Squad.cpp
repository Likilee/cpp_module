#include "Squad.hpp"

Squad::Squad()
{
	_unit = new ISpaceMarine*[1];
	_unit[0] = NULL;
	_count = 0;
}

Squad::Squad(const Squad &from)
{
	_unit = new ISpaceMarine*[1];
	_unit[0] = NULL;
	_count = 0;
	*this = from;
}

Squad::~Squad()
{
	if (_count > 0) // 기존 유닛존재
		for (int i = 0; i < _count; ++i)
			delete _unit[i];
		delete [] _unit;
}

Squad		&Squad::operator=(const Squad &rvalue)
{
	if (this != &rvalue)
	{
		if (_count > 0) // 기존 유닛존재
			for (int i = 0; i < _count; ++i)
				delete _unit[i];
			delete [] _unit;
			_unit = new ISpaceMarine*[1];
			_unit[0] = NULL;
			_count = 0;
		for (int i = 0; i < rvalue.getCount(); ++i)
			this->push(rvalue.getUnit(i)->clone());
	}
	return (*this);
}

int				Squad::getCount() const
{
	return (_count);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	if (n > _count - 1 || n < 0)
		return (NULL);
	return _unit[n];
}

bool			Squad::is_in_squad(ISpaceMarine *rookie)
{
	for (int i = 0; i < _count; ++i)
		if (_unit[i] == rookie)
			return (true);
	return (false);
}

int				Squad::push(ISpaceMarine *rookie)
{
	ISpaceMarine	**new_unit;
	int				i;

	if (rookie == NULL || is_in_squad(rookie))
		return (_count);
	_count += 1;
	new_unit = new ISpaceMarine*[_count + 1];
	for (i = 0; i < _count - 1; ++i)
		new_unit[i] = _unit[i];
	new_unit[i] = rookie;
	new_unit[_count] = NULL;
	delete [] _unit;
	_unit = new_unit;
	return (_count);
}
