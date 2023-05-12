#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: the resulting string
 * @src: the source string
 * @n: number of the byte
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

