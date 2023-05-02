#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: the pointerto the string that will be printed
 * Return: Always 0
 */
void _puts(char *str);
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
