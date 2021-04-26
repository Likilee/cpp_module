#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:
	RadScorpion();
	RadScorpion(const RadScorpion &from);
	~RadScorpion();
	RadScorpion	&operator=(const RadScorpion &rvalue);

	void takeDamage(int damage);
};

#endif
