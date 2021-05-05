template <typename T>
Array<T>::Array(): _array(NULL), _n(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]()), _n(n)
{
}

template <typename T>
Array<T>::Array(Array<T> const &from): _array(NULL), _n(0)
{
	*this = from;
}

template <typename T>
Array<T>::~Array()
{
	delete [] _array;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array<T> const &rvalue)
{
	if (this != &rvalue)
	{
		if (_array && _n != 0)
			delete [] _array;
		_n = rvalue.size();
		_array = new T[_n];
		for (unsigned int i = 0; i < _n; ++i)
			_array[i] = rvalue.getArray()[i];
	}
	return (*this);
}

template <typename T>
T		&Array<T>::operator[](unsigned int i) const
{
	if (i >= _n)
		throw Array<T>::OutOfRangeException();
	else
		return (_array[i]);
}
template <typename T>
const char *Array<T>::OutOfRangeException::what() const throw()
{
	return ("Index is out of range");
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_n);
}

template <typename T>
T				*Array<T>::getArray() const
{
	return (_array);
}

