#include "main.h"

/**
 * print_most_numbers - prints the numbers 01356789
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
		a++;

	}
	_putchar('\n');
}
