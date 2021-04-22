#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string const &name);
	FragTrap(const FragTrap &from);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &rvalue);
	void		vaulthunter_dot_exe(std::string const & target);
};

#endif
