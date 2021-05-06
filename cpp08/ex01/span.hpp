#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <set>
# include <exception>

class Span
{
private:
	unsigned int		_n;
	std::multiset<int>	_multiset;
public:
	Span();
	Span(unsigned int n);
	Span(const Span &from);
	virtual ~Span();
	Span	&operator=(const Span &rvalue);

	std::multiset<int> const	&getMultiSet() const;
	unsigned int const			&getN() const;

	void		addNumber(int n);
	template <typename Inputiterator>
	void		addNumber(Inputiterator begin, Inputiterator end)
	{
		if (end - begin > _n)
			throw TooBigSource();
		else
		{
			for (;begin != end; ++begin)
				addNumber(*begin);
		}
	}
	
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	class FullException : public std::exception
	{
		virtual const char	*what() const throw();
	};
	class FewKeyException : public std::exception
	{
		virtual const char	*what() const throw();
	};
	class TooBigSource : public std::exception
	{
		virtual const char	*what() const throw();
	};
};

#endif
