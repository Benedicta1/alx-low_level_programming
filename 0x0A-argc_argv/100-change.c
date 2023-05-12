#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number coins to make change for an amount of money.
 * @argc: number of arguments on command line
 * @argv: an array of c-style string
 * Return: print 0, if the number passed a arguments is 0
 */

int main(int argc, char *argv[])
{
	int cents = 0, coins = 0;
	char c[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	if (cents == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
