#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Write a function that prints numbers, followed by a new line
 * @separator: where separator is the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: The variable of numbers being printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list bb;
	unsigned int aa;

	va_start(bb, n);
	for (aa = 0; aa < n; aa++)
	{
		printf("%d", va_arg(bb, int));
		if (aa != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(bb);
}
