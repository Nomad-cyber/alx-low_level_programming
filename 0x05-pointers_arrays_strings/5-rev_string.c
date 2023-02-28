#include "main.h"
/**
  * rev_string - Reverses a string
  * @str: The string to be modified
  *
  * Return: void
  */
void rev_string(char *str)
{
	int len = 0, i = 0;
	char temp;

	while (str[len] != '\0')
		len++;

	while (i < len--)
	{
		temp = str[i];
		str[i++] = str[len];
		str[len] = temp;
	}
}

