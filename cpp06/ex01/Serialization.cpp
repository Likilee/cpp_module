#include "Serialization.hpp"
#include <iostream>

void	*serialize(void)
{
	char	random_char_pool[26 * 2 + 10];// alpha + 0~9 = 62

	for (int i = 0; i < 26; ++i)
		random_char_pool[i] = i + 65;
	for (int i = 26; i < 52; ++i)
		random_char_pool[i] = i + 71;
	for (int i = 52; i < 62; ++i)
		random_char_pool[i] = i - 4;

	char			*sequence = new char[52];
	std::string		tmp;

	for (int i = 0; i < 8; ++i)
		tmp += random_char_pool[rand() % 62];
	*(reinterpret_cast<std::string*>(sequence)) = tmp;
	*(reinterpret_cast<int*>(sequence + 24)) =  rand() % 42424242;
	tmp = "";
	for (int i = 0; i < 8; ++i)
		tmp += random_char_pool[rand() % 62];
	*(reinterpret_cast<std::string*>(sequence + 28)) = tmp;
	return (sequence);
}

Data	*deserialize(void *raw)
{
	Data	*data = new Data;
	char	*raw_char = static_cast<char*>(raw);
	data->s1 = *(reinterpret_cast<std::string*>(raw_char));
	data->n = *(reinterpret_cast<int*>(raw_char + 24));
	data->s2 = *(reinterpret_cast<std::string*>(raw_char + 28));
	return (data);
}
