#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: the minimum value in the range
 * @max: the maximum valur in the range
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
		return (NULL);
	for (b = 0; min <= max; b++, min++)
		a[b] = min;
	return (a);
}
