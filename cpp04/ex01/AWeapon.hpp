#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
private:
	std::string	_name;
	int			_apcost;
	int			_damage;
public:
	AWeapon();
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &from);
	virtual ~AWeapon();
	AWeapon	&operator=(const AWeapon &rvalue);

	std::string const	&getName() const;
	int					getAPCost() const;
	int					getDamage() const;
	void				setName(const std::string &name);
	void				setAPcost(const int &apcost);
	void				setDamage(const int &damage);
	virtual void		attack() const = 0;
};

#endif
