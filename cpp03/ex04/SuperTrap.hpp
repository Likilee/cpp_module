#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &from);
	~SuperTrap();

	SuperTrap	&operator=(const SuperTrap &rvalue);
	void		rangedAttack(std::string const &target); //Frag
	void		meleeAttack(std::string const &target); //Ninja
};
#endif
