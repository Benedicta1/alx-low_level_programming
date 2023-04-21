#include <stdio.h>
/**
 *main - prints all single digit numbers of base 10 starting fr0m 0
 *Return: Should return a success value
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	putchar((i % 10) + '0');

	putchar('\n');
	return (0);
}
