#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
private:
	std::string	favorite_food;
public:
	Brain(/* args*/);
	virtual		~Brain();
	void		SetBrain(std::string favorite_food);
	const void	*identify() const;
};

#endif
