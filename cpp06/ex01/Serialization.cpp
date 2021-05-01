#include "Serialization.hpp"

void	*serialize(void)
{
	char	random_char_pool[26 * 2 + 10];// alpha + 0~9 = 62
	int		random_num;

	for (int i = 0; i < 26; ++i)
		random_char_pool[i] = i + 65;
	for (int i = 26; i < 52; ++i)
		random_char_pool[i] = i + 71;
	for (int i = 52; i < 62; ++i)
		random_char_pool[i] = i - 4;
	random_num = rand() % 42424242;

	void	*sequence = new char[20];
	for (int i = 0; i < 8; ++i)
		static_cast<char*>(sequence)[i] = random_char_pool[rand() % 62];
	static_cast<int*>(sequence)[2] = random_num;
	for (int i = 12; i < 20; ++i)
		static_cast<char*>(sequence)[i] = random_char_pool[rand() % 62];
	return (sequence);
}

Data	*deserialize(void *raw)
{
	Data	*data = new Data;

	data->s1 = "";
	for (int i = 0; i < 8; ++i)
		data->s1 += static_cast<char*>(raw)[i];
	data->n = static_cast<int*>(raw)[2];
	for (int i = 12; i < 20; ++i)
		data->s2 += static_cast<char*>(raw)[i];
	return (data);
}
