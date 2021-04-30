#include "Form.hpp"

void	Form::checkGrade(int const &grade) const
{
	if (grade > 150)
		throw Form::GradeTooLowException();
	else if (grade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const std::string &name, const int sign_grade, const int exec_grade)
	: _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	checkGrade(_sign_grade);
	checkGrade(_exec_grade);
}

Form::Form(const Form &from)
	: _name(from.getName()), _signed(false), _sign_grade(from.getSignGrade()), _exec_grade(from.getExecGrade())
{
	checkGrade(_sign_grade);
	checkGrade(_exec_grade);
}

Form::~Form()
{
}

Form		&Form::operator=(const Form &rvalue)
{
	if (this != &rvalue)
		_signed = rvalue.isSigned();
	return (*this);
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Exception occured : Form's grade too low");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Exception occured : Form's grade too high");
}

const char	*Form::GradeAlreadySignedException::what() const throw()
{
	return ("Exception occured : Form is already signed");
}

const std::string	&Form::getName() const
{
	return (_name);
}

const bool			&Form::isSigned() const
{
	return (_signed);
}
const int			&Form::getSignGrade() const
{
	return (_sign_grade);
}
const int			&Form::getExecGrade() const
{
	return (_exec_grade);
}

void				Form::beSigned(Bureaucrat &b)
{
	if (isSigned())
		throw Form::GradeAlreadySignedException();
	else if (b.getGrade() > _sign_grade)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

std::ostream	&operator<<(std::ostream &out, Form &b)
{
	out << "<" << b.getName() << "|signed(" << std::boolalpha << b.isSigned() << ")|"
		<< "sg(" << b.getSignGrade() << ")|"
		<< "eg(" << b.getExecGrade() << ")>";
	return (out);
}
