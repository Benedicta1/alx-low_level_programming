#include <stdio.h>
/**
 *main - program that prints all possible combinations of single-digit numbers
 *Return: Should return a sucess value
 */
int main(void)
{
	int x;

	for (x = 20; x  <= 30; ++)
	{
		putchar((x % 20) + '0');
		if (x == 30)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
