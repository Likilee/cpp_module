#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.hpp"

class	PhoneBook
{
private:
	Contact		contacts[8];
	int			amount;
	bool		IsValidIndex(std::string temp);
	int			IndexStringToInt(std::string temp);
	void		ShowInformationOfIndex(int index);

public:
	PhoneBook();
	~PhoneBook();
	void	Add(void);
	void	Search(void);
	void	Exit(void);
};

#endif
