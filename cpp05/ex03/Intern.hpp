#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
	int		IndexOfMatchForm(std::string const &name);
public:
	Intern();
	Intern(const Intern &from);
	virtual ~Intern();
	Intern	&operator=(const Intern &rvalue);

	Form	*makeForm(std::string name, std::string target);
	class	InCorrectFormName : public std::exception
	{
		virtual const char *what() const throw();
	};
};

Form		*createShrubberyForm(std::string const &target);
Form		*createRobotomyRequest(std::string const &target);
Form		*createPresidentialPardon(std::string const &target);

#endif
