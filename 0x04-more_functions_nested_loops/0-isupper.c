#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: the integer to be used.
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 65 && c < 90)
		return (1);
	return (0);
}
