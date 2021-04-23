#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
protected:
	std::string	_name;
	Victim();
	void	ConstructMessage();
	void	DestructorMessage();

public:
	Victim(std::string name);
	Victim(const Victim &from);
	~Victim();
	Victim	&operator=(const Victim &rvalue);

	const std::string	&getName() const;
	void				announce() const;
	virtual void		getPolymorphed() const;
};

std::ostream		&operator<<(std::ostream &out, Victim &victim);

#endif
