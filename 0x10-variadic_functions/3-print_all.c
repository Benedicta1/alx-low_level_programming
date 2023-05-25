#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Write a function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *aa = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", aa, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", aa, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", aa, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", aa, str);
					break;
				default:
					i++;
					continue;
			}
			aa = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
