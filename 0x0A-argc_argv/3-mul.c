#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments on command line
 * @argv: an array of c-style string
 * Return: print error folowed by a new line and 1
 * If the program does not receive two arguments,
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	printf("Error\n");
	return (1);
}
