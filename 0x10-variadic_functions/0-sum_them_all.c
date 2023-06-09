#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: This is the number of parameters passed to the function.
 * @...: The variable number of parameters to calculate the sum of
 * Return: This returns the sum of all its parameters, If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list be;
	unsigned int x, sum = 0;

	va_start(be, n);
	for (x = 0; x < n; x++)
		sum += va_arg(be, int);
	va_end(be);

	return (sum);
}
