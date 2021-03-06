#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
	/* data */
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &from);
	~TacticalMarine();
	TacticalMarine	&operator=(const TacticalMarine &rvalue);

	ISpaceMarine* clone() const; // 현재 오브젝트를 복사해서 return
	void battleCry() const; // "For the holy PLOT!"
	void rangedAttack() const; //  "* attacks with a bolter *"
	void meleeAttack() const; //  "* attacks with a bolter *"
};

#endif
