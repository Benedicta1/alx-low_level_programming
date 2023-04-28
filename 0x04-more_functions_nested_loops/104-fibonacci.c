#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * Return: Always 0
 */
int main(void)
{
	int count = 2;
	long int a = 1, b = 2;
	long int c;

	printf("%lu, ", a);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", b);
		}
		else
		{
			printf("%lu, ", b);
		}

		c = b;
		b += a;
		a = c;
		count++;
	}

	return (0);
