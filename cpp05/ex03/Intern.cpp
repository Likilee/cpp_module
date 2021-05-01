#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &from)
{
	*this = from;
}

Intern::~Intern()
{
}

Intern		&Intern::operator=(const Intern &rvalue)
{
	if (this != &rvalue)
		*this = rvalue;
	return (*this);
}

Form		*Intern::makeForm(std::string name, std::string target)
{
	int		index;
	Form	*(*create_form[3])(std::string const &)
	= {createShrubberyForm, createRobotomyRequest, createPresidentialPardon};

	index = IndexOfMatchForm(name);
	if (index == 4)
		throw Intern::InCorrectFormName();
	else
		return (create_form[index](target));
}

Form		*createShrubberyForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form		*createRobotomyRequest(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form		*createPresidentialPardon(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

int			Intern::IndexOfMatchForm(std::string const &name)
{
	std::string const form_name[]
	= {"Presidential Pardon form", "Robot to my request form", "Shrubbery Creation form"};

	for (int i = 0; i < 4; ++i)
		if (form_name[i] == name)
			return (i);
	return (4);
}

const char	*Intern::InCorrectFormName::what() const throw()
{
	return ("Incorrect form name! can't create form");
}
