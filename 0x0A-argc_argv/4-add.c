#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments on command line
 * @argv: an array of c-style string
 * Return: print error if one of the number contains symbols
 * that are not digits, followed by a new line and 1
 */

int main(int argc, char *argv[])
{
	int x, suma = 0, res = 0;
	char c[] = "Error", *find_letter;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			find_letter = argv[x];
			while (*find_letter != 0)
			{
				if (*find_letter < 47 || *find_letter > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				find_letter++;
			}
			res = atoi(argv[x]);
			suma += res;
		}
		printf("%d\n", suma);
	}
	else
		printf("%d\n", 0);
	return (0);
}
