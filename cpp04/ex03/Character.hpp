#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string		_name;
	AMateria		*_inventory[4];
	int				_count;
	Character();
public:
	Character(const std::string name);
	Character(const Character &from);
	~Character();
	Character	&operator=(const Character &rvalue);

	std::string const	&getName() const;
	int					getCount() const;
	AMateria			*getMateria(int idx) const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};

#endif
