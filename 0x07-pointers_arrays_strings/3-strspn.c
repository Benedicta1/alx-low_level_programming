#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to evaluate
 * @accept: the list of character to match in s
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{

		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
