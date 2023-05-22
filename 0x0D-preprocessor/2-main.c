#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from,
 * followed by a new line.
 * Return: The output should be successful 0
 */

int main(void)
{
	printf("Name of source file: %s\n", __FILE__);
	return (0);
}
