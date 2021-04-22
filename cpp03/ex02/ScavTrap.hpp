#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(const ScavTrap &from);
	~ScavTrap();

	ScavTrap			&operator=(const ScavTrap &rvalue);
	void				challengeNewcomer();
};

#endif
