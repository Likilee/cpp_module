#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
public:
	SuperMutant();
	SuperMutant(const SuperMutant &from);
	~SuperMutant();
	SuperMutant	&operator=(const SuperMutant &rvalue);

	void takeDamage(int damage);

};

#endif
