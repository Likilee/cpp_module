#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_materials[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &from);
	~MateriaSource();
	MateriaSource	&operator=(const MateriaSource &rvalue);

	AMateria	*getMateria(int idx) const;
	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);
};

#endif
