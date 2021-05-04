#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T, std::list<T> >
{
private:
	/* data */
public:
	MutantStack() : std::stack<T, std::list<T> >() {}
	MutantStack(const MutantStack<T> &from) : std::stack<T, std::list<T> >(from)
	{
		*this = from;
	}
	virtual ~MutantStack() {}
	MutantStack	&operator=(const MutantStack<T> &rvalue)
	{
		std::stack<T, std::list<T> >::operator=(rvalue);
		return (*this);
	}

	typedef typename std::stack<T, std::list<T> >::container_type::iterator iterator;
	typedef typename std::stack<T, std::list<T> >::container_type::const_iterator const_iterator;
	typedef typename std::stack<T, std::list<T> >::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T, std::list<T> >::container_type::const_reverse_iterator const_reverse_iterator;

	iterator		begin()
	{
		return (this->c.begin());
	}
	const_iterator	begin() const
	{
		return (this->c.begin());
	}
	iterator		end()
	{
		return (this->c.end());
	}
	const_iterator	end() const
	{
		return (this->c.end());
	}
	reverse_iterator		rbegin()
	{
		return (this->c.rbegin());
	}
	const_reverse_iterator	rbegin() const
	{
		return (this->c.rbegin());
	}
	reverse_iterator		rend()
	{
		return (this->c.rend());
	}
	const_reverse_iterator	rend() const
	{
		return (this->c.rend());
	}
};

#endif
