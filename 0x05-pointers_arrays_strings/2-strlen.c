#include "main.h"
/**
  * _strlen - Returns the length of a string
  * @str: String to count
  *
  * Return: String length
  */
int _strlen(char *str)
{
	int c = 0;

	for (; *str != '\0'; str++)
	{
		c++;
	}

	return (c);
}

