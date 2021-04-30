#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "fstream"

class PresidentialPardonForm : public Form
{
private:
	std::string	const	_target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(const PresidentialPardonForm &from);
	~PresidentialPardonForm();
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &rvalue);

	std::string const	&getTarget() const;
	void	execute(Bureaucrat const &executor) const;
};

#endif
