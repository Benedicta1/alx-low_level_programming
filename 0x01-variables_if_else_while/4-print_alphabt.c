#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase except q and e
 * Return: Should return a success value
 */
int main(void)
{
	char be;
	for (be = 'a'; be <= 'z'; be++)
	{
	if (be != 'q' && be != 'e')
	putchar(be);
	}

	putchar ('\n');
	return (0);
}
