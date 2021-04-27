#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <iostream>
# include <string>

class Squad : public ISquad
{
private:
	ISpaceMarine	**_unit;
	int				_count;

	bool			is_in_squad(ISpaceMarine *rookie);
public:
	Squad();
	Squad(const Squad &from);
	~Squad();
	Squad	&operator=(const Squad &rvalue);

	int	getCount() const;
	ISpaceMarine	*getUnit(int n) const;
	int	push(ISpaceMarine *rookie);
};

#endif
