#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &from);
	~PowerFist();
	PowerFist	&operator=(const PowerFist &rvalue);
	void	attack() const;
};

#endif
