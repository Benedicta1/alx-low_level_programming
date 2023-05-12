#include "main.h"
#include <stdio.h>

/**
 * main -  program that prints its name, followed by a new line
 * @argc: number of arguments on command line
 * @argv: an array of c-style string
 * Return: Should return a success value
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
