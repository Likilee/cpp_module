#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
private:
	std::string	name;
	int			age;
public:
	Pony(void);
	Pony(std::string name_in, int age_in);
	virtual ~Pony();

	void	Howl(void);
};

#endif
