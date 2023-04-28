#include <stdio.h>
#include <main.h>
/**
 * main - a program that finds and prints largest prime factor
 * Description: peints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a, b = 612852475143;

	for (a = 3; a < 782849; i = i + 2)
	{
		while ((b % a == 0) && (b != a))
			b = b / a;
	}
	printf("%lu\n", b);
	return (0);
}
