#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: the integer input
 * @av: the double pointer array
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, | = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			|++;

	}

	| += ac;

	str = malloc(sizeof(char) * | +1);

	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		if (str[z] == '\0')
		{
			str[z++] = '\n';
		}
	}
	return (str);
}
