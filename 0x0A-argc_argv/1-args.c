#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of arguments on command line
 * @argv: an array of c-style string
 * Return: Should return a success value
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
