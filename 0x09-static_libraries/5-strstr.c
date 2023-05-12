#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: the string to search
 * @needle: the substring to look for
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (NULL);
}
