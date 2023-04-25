#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char be;
int x = 0;

while (x <= 9)
{
	for (be = 'a'; be <= 'z'; be++)
	{
	_putchar(x);
	}
	_putchar('\n');

	x++;
}
}
