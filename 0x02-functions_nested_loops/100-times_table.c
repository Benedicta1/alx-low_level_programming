#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 *@n: the integer
 *Return: Always 0
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 12)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (c > 98)
				{
					_putchar(',');
					_putchar(30);
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c > 7)
				{
					_putchar(',');
					_putchar(30);
					_putchar(30);
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(30);
						_putchar(30);
						_putchar(30);
					}
					_putchar(c + '0');
				}
			}
			_putchar('\n');
		}
	}
}

