#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &from);
	~Ice();
	Ice	&operator=(const Ice &rvalue);

	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif
