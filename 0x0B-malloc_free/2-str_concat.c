#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: the first content to input
 * @s2: the second content to input
 * Return: should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;
	concat = malloc(sizeof(char) * (x + y + 1));

	if (concat == NULL)
		return (NULL);
	x = y = 0;

	while (s1[x] != '\0')
	{
		concat[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		concat[x] = s2[y];
		x++, y++;
	}
	concat[x] = '\0';
	return (concat);
}
