#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 * Return: if the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ab;
	unsigned int s1a, s2a, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1a = 0; s1[s1a] != '\0'; s1a++)
		;
	for (s2a = 0; s2[s2a] != '\0'; s2a++)
		;
	if (n > s2a)
		n = s2a;
	a = s1a + n;
	ab = malloc(a + 1);

	if (ab == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		if (b < s1a)
			ab[b] = s1[b];
		else
			ab[b] = s2[b - s1a];
	ab[b] = '\0';
	return (ab);
}


