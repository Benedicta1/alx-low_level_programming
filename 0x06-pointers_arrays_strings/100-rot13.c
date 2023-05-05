#include "main.h"
/**
 * rot13 -  a function that encodes a string using rot13
 * @s: the string that is encoded
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int x, y;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
	for (y = 0; a[y] != '\0'; y++)
	{
	if (s[x] == a[y])
	{
	s[x] = b[y];
break;
	}
	}
	}
	return (s);
}
