#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const std::string	Human::identify() const
{
	return (this->brain.identify());
}

const Brain &Human::getBrain() const
{
	return (this->brain);
}
