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
	int multiply = 0;
	char x[] = "Error";

	if (argc != 4)
	{
		printf("%s\n", x);
		return (1);
	}
	multiply = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", multiply);
	return (0);
}
