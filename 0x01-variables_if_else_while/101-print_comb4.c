#include <stdio.h>
/**
 *main - program that prints al possible different combinations of three digits
 *Return: Should return a success value
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 6; num1++)
	{
	for (num2 = num1 + 1; num2 < 7; num2++)
	{
	for (num3 = num2 + 1; num3 < 8; num3++)
	{

	putchar((num1 % 8) + '0');
	putchar((num2 % 8) + '0');
	putchar((num2 % 8) + '0');

	if (num1 == 5 && num2 == 6 && num3 == 7)
		continue;

	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
