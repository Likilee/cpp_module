#include "Brain.hpp"

Brain::Brain()
{
	this->favorite_food = "Everything";
}

Brain::~Brain()
{
}

const std::string	Brain::identify() const
{
	std::stringstream	pointer;
	pointer << this;
	return (pointer.str());
}

void	Brain::SetBrain(std::string favorite_food)
{
	this->favorite_food = favorite_food;
}
