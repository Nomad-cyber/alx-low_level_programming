#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: represents a character
 *
 * Return: On success 1, On error -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

