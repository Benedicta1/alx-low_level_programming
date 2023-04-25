#include "main.h"
/**
 * print_last_digit -prints the last digit
 * @b: the number to be computed
 * Return: The value of the last digit
 */
int print_last_digit(int b)
{
	int last_digit = b % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar (last_digit + '0');

	return (last_digit);
}
