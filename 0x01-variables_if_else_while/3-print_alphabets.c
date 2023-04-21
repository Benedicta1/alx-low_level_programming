#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: Should return a success value
 */
int main(void)
{
	char be;

	for (be = 'a'; be <= 'z'; be++)
	putchar(be);

	for (be = 'A'; be <= 'Z'; be++)
	putchar(be);

	putchar('\n');
	return (0);
}
