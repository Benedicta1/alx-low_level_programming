#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char be;

	for (be = 'a'; be <= 'z'; be++)
		_putchar(be);

	_putchar('\n');
}
