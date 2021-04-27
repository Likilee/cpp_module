#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_materials[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &from)
{
	for (int i = 0; i < 4; ++i)
		_materials[i] = NULL;
	*this = from;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materials[i] != NULL)
			delete _materials[i];
		_materials[i] = NULL;
	}
}

MateriaSource		&MateriaSource::operator=(const MateriaSource &rvalue)
{
	if (this != &rvalue)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (_materials[i])
				delete _materials[i];
			_materials[i] = NULL;
		}
		for (int i = 0; i < 4; ++i)
		{
			if (rvalue.getMateria(i) != NULL)
				_materials[i] = rvalue.getMateria(i)->clone();
			else
				_materials[i] = NULL;
		}
	}
	return (*this);
}

AMateria	*MateriaSource::getMateria(int idx) const
{
	if (idx > 3 || idx < 0)
		return NULL;
	return (_materials[idx]);
}

void		MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (_materials[i] == NULL)
		{
			_materials[i] = m->clone();
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materials[i] && _materials[i]->getType() == type)
			return (_materials[i]->clone());
	}
	return (NULL);
}
