#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string const &name);
	NinjaTrap(const NinjaTrap &from);
	~NinjaTrap();

	NinjaTrap	&operator=(const NinjaTrap &rvalue);
	void		ninjaShoebox(FragTrap &frag);
	void		ninjaShoebox(ScavTrap &scav);
	void		ninjaShoebox(ClapTrap &clap);
	void		ninjaShoebox(NinjaTrap &ninja);
};

#endif
