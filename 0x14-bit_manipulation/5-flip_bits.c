#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to change position in number.
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
