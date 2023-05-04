#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters
 *  of a string to uppercase
 *  @s: the string to change
 *  Return: the result of the string
 */
char *string_toupper(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] >= 'a' && s[b] <= 'z')
			s[b] = s[b] - 32;
	}
	return (s);
