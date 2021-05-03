#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Form;

class Bureaucrat
{
private:
	std::string	const	_name;
	int		_grade;
	Bureaucrat();
	void	checkGrade(int grade) const;
public:
	Bureaucrat(const std::string &name, const int &grade);
	Bureaucrat(const Bureaucrat &from);
	~Bureaucrat();
	Bureaucrat	&operator=(const Bureaucrat &rvalue);

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	const std::string	&getName() const;
	const int			&getGrade() const;
	void				increaseGrade();
	void				decreaseGrade();

	void				signForm(Form &form);
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat &b);

#endif
