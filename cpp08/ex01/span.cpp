#include "span.hpp"

Span::Span(): _n(0)
{}

Span::Span(unsigned int n) : _n(n)
{}

Span::Span(const Span &from) : _n(from.getN()), _multiset(from.getMultiSet())
{}

Span::~Span()
{
}

Span		&Span::operator=(const Span &rvalue)
{
	if (this != &rvalue)
	{
		_multiset = rvalue.getMultiSet();
		_n = rvalue.getN();
	}
	return (*this);
}

std::multiset<int> const	&Span::getMultiSet() const
{
	return (_multiset);
}
unsigned int const			&Span::getN() const
{
	return (_n);
}

void			Span::addNumber(int n)
{
	if (_multiset.size() >= _n)
		throw FullException();
	else
		_multiset.insert(n);
}

unsigned int	Span::shortestSpan()
{
	if (_multiset.size() <= 1)
		throw FewKeyException();

	std::multiset<int>::iterator	itr_front = _multiset.begin();
	std::multiset<int>::iterator	itr_next = ++_multiset.begin();
	unsigned int					gap = 0;
	unsigned int					shortest_gap = static_cast<long long>(*itr_next) - static_cast<long long>(*itr_front);

	for (; itr_next != _multiset.end(); ++itr_next)
	{
		gap = static_cast<long long>(*itr_next) - static_cast<long long>(*itr_front);
		if (shortest_gap > gap)
			shortest_gap = gap;
		++itr_front;
	}
	return (shortest_gap);
}

unsigned int	Span::longestSpan()
{
	if (_multiset.size() <= 1)
		throw FewKeyException();
	std::multiset<int>::iterator	itr_begin = _multiset.begin();
	std::multiset<int>::iterator	itr_last = --_multiset.end();
	unsigned int					longest_gap = static_cast<long long>(*itr_last) - static_cast<long long>(*itr_begin);

	return (longest_gap);
}

const char	*Span::FullException::what() const throw()
{
	return ("Error : container is full");
}

const char	*Span::FewKeyException::what() const throw()
{
	return ("Error : Container has few key..");
}

const char	*Span::TooBigSource::what() const throw()
{
	return ("Error : Source range is too big..");
}

