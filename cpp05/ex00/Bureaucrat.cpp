#include "Bureaucrat.hpp"

void	Bureaucrat::checkGrade(int grade) const
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : _name(name), _grade(grade)
{
	checkGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &from) : _name(from.getName()), _grade(from.getGrade())
{
	checkGrade(_grade);
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat		&Bureaucrat::operator=(const Bureaucrat &rvalue)
{
	if (this != &rvalue)
		_grade = rvalue.getGrade();
	return (*this);
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception occured : Bureaucrat's grade too low");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception occured : Bureaucrat's grade too high");
}

const std::string	&Bureaucrat::getName() const
{
	return (_name);
}

const int	&Bureaucrat::getGrade() const
{
	return (_grade);
}

void		Bureaucrat::increaseGrade()
{
	this->checkGrade(_grade - 1);
	--_grade;
}

void		Bureaucrat::decreaseGrade()
{
	this->checkGrade(_grade + 1);
	++_grade;
}

// Global
std::ostream	&operator<<(std::ostream &out, Bureaucrat &b)
{
	out << "<" << b.getName() << "(" << b.getGrade() << ")>";
	return (out);
}
