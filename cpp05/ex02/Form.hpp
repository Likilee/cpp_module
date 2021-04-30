#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	_name;
	bool				_signed;
	int const			_sign_grade;
	int const			_exec_grade;

	Form();
	void	checkGrade(int const &grade) const;

public:
	Form(const std::string &name, const int sign_grade, const int exec_grade);
	Form(const Form &from);
	virtual ~Form();
	Form	&operator=(const Form &rvalue);

	class GradeTooHighException : public std::exception
	{
		virtual const char	*what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeAlreadySignedException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
		virtual const char *what() const throw();
	};
	const std::string	&getName() const;
	const bool			&isSigned() const;
	const int			&getSignGrade() const;
	const int			&getExecGrade() const;
	void				beSigned(Bureaucrat &b);
	virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream	&operator<<(std::ostream &out, Form const &b);

#endif
