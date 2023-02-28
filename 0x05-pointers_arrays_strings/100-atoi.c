#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @str: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *str)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (str[c])
	{
		if (str[c] == 45)
		{
			min *= -1;
		}

		while (str[c] >= 48 && str[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (str[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}

