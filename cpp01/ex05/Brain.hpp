#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>

class Brain
{
private:
	std::string	favorite_food;
public:
	Brain();
	virtual				~Brain();
	void				SetBrain(std::string favorite_food);
	const std::string	identify() const;
};

#endif
