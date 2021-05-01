#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "fstream"

class RobotomyRequestForm : public Form
{
private:
	std::string	const	_target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(const RobotomyRequestForm &from);
	~RobotomyRequestForm();
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &rvalue);

	std::string const	&getTarget() const;
	void	execute(Bureaucrat const &executor) const;
};

#endif
