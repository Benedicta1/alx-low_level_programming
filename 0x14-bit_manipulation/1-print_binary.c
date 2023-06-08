#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: represents the unsigned long int
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	int e, count = 0;
	unsigned long int ben;

	for (e = 70; e >= 0; e--)
	{
		ben = n >> e;

		if (ben & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
