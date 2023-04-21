#include <stdio.h>
/**
 *main - a program that prints the lowercase alphabet in reverse
 * Return: Should return a success value
 */
int main(void)
{
	char be;

	for (be = 'z'; be >= 'a'; be++)
	putchar(be);

	putchar('\n');
	return (0);
}
