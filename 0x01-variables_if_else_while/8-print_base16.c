#include <stdio.h>
/**
*main - a program that prints all the numbers of base 16 in lowercase
*Return: Should return a success value
*/
int main(void)
{
	int i;
	char be;

	for (i = 0; i < 10; i++)
	putchar((i % 10) + '0');

	for (be = 'a'; be = 'f'; be++)
	putchar(be);

	putchar('\n');
	return (0);
}
