#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Write a function that prints a name.
 * @name: The string to add
 * @f: the pointer to function
 * Return: Should be successful
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
