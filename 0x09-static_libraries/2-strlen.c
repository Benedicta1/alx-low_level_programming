#include "main.h"
/**
 * _strlen -  a function that returns the length of a string.
 * @x: the string that is evaluated.
 * Return: Length of the string
 */
int _strlen(char *x)
{
	int b;

	b = 0;

	while (x[b] != '\0')
	{
		b++;
	}
	return (b);
}
