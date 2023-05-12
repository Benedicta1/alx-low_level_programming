#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte
 * @s: the address of memory to be filled
 * @b: the char to copy
 * @n: the number of times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
