#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: pointer to number 1 value
 * @b: pointer to number 2 value
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
