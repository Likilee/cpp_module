#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim
{
private:
	Peon();
public:
	Peon(const Peon &from);
	Peon(std::string name);
	~Peon();
	Peon	&operator=(const Peon &rvalue);

	void	getPolymorphed() const;
};

#endif
