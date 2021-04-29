#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include /* header */

class Bureaucrat
{
private:
	/* data */
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &from);
	~Bureaucrat();
	Bureaucrat	&operator=(const Bureaucrat &rvalue);
};

#endif
