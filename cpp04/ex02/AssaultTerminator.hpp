#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
	/* data */
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &from);
	~AssaultTerminator();
	AssaultTerminator	&operator=(const AssaultTerminator &rvalue);

	ISpaceMarine* clone() const; // 현재 오브젝트를 복사해서 return
	void battleCry() const; // "For the holy PLOT!"
	void rangedAttack() const; //  "* attacks with a bolter *"
	void meleeAttack() const; //  "* attacks with a bolter *"
};

#endif
