#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return : you can only use _putchar twice in your code
 */
void print_most_numbers(void)
{
	char b;
	
	for (b = '0'; b <= '9'; b++)
	{
		if (!(b == '2' || b == '4'))
			_putchar(b);
	}
	_putchar('\n');
}
