#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: reversed string to be printed.
 * Return: A reversed string
 */
void rev_string(char *s)
{
	char tmp;
	int a, len, len1;

	len = 0;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len1 = len - 1;

	for (a = 0; a < len / 2; a++)
	{
		tmp = s[a];
		s[a] = s[len1];
		s[len1--] = tmp;
	}
}
