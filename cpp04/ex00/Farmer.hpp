#ifndef Farmer_HPP
# define Farmer_HPP

#include "Victim.hpp"

class Farmer: public Victim
{
private:
	Farmer();
public:
	Farmer(const Farmer &from);
	Farmer(std::string name);
	~Farmer();
	Farmer	&operator=(const Farmer &rvalue);

	void	getPolymorphed() const;
};

#endif
