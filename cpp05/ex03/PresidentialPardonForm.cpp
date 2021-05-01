#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
: Form("Presidential Pardon form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &from)
: Form(from), _target(from.getTarget())
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(const PresidentialPardonForm &rvalue)
{
	(void)rvalue;
	return (*this);
}

std::string const	&PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	fout;

	if (isSigned() == false) //1. 폼이 사인되어있는지
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > getExecGrade())//2. 실행 관료가 충분히 등급이 높은지
		throw Form::GradeTooHighException();
	else
		std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
