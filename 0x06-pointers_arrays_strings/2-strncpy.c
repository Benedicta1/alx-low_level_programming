#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of the bytes to copy
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		det[a] = '\0';
		a++;
	}
	return (dest);
