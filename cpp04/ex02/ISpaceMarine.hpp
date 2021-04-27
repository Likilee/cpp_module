#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {};
	virtual ISpaceMarine* clone() const = 0; // 현재 오브젝트를 복사해서 return
	virtual void battleCry() const = 0; // "For the holy PLOT!"
	virtual void rangedAttack() const = 0; //  "* attacks with a bolter *"
	virtual void meleeAttack() const = 0; //  "* attacks with a bolter *"
};

#endif
