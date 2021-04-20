#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const void	*Human::identify() const
{
	return (this->brain.identify());
}
