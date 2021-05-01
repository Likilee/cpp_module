#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
: Form("Robot to my request form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &from)
: Form(from), _target(from.getTarget())
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(const RobotomyRequestForm &rvalue)
{
	(void)rvalue;
	return (*this);
}

std::string const	&RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	fout;

	if (isSigned() == false) //1. 폼이 사인되어있는지
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > getExecGrade())//2. 실행 관료가 충분히 등급이 높은지
		throw Form::GradeTooHighException();
	else
	{
		if (rand() % 2)
			std::cout << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout << _target << " failed to robotomize! " << std::endl;
	}
}
