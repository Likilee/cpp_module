#include "Brain.hpp"

Brain::Brain()
{
	this->favorite_food = "Everything";
}

Brain::~Brain()
{
}

const void	*Brain::identify() const
{
	return(this);
}

void	Brain::SetBrain(std::string favorite_food)
{
	this->favorite_food = favorite_food;
}
