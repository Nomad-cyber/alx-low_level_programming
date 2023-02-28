#include "main.h"
/**
  * rev_string - Reverses a string
  * @str: The string to be modified
  *
  * Return: void
  */
void rev_string(char *str)
{
	int i, c, k;
	char *a, temp;

	a = str;

	while (str[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		temp = str[i];
		str[i] = *a;
		*a = temp;
		a--;
	}
}

