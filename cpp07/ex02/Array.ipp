#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(NULL), _n(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]()), _n(n)
{
}

template <typename T>
Array<T>::Array(const Array<T> &from)
{
	*this = from;
}

template <typename T>
Array<T>::~Array()
{
	delete [] _array;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &rvalue)
{
	if (this != &rvalue)
	{
		if (_array)
			delete [] _array;
		_n = rvalue.size();
		_array = new T[_n];
		for (int i = 0; i < _n; ++i)
			_array[i] = rvalue[i];
	}
	return (*this);
}

template <typename T>
T		&Array<T>::operator[](unsigned int i)
{
	if (i >= _n)
		throw std::exception();
	else
		return (_array[i]);
}

template <typename T>
unsigned int	&Array<T>::size() const
{
	return (_n);
}
