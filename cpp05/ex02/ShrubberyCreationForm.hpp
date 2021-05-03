#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "fstream"

class ShrubberyCreationForm : public Form
{
private:
	std::string	const	_target;
	ShrubberyCreationForm();
	void	drawTree(std::ofstream &fout) const;
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &from);
	~ShrubberyCreationForm();
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rvalue);

	class IsNotOpenException : public std::exception
	{
		virtual const char *what() const throw();
	};
	std::string const	&getTarget() const;
	void	execute(Bureaucrat const &executor) const;
};

#endif
