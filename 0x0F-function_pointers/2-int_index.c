#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Write a function that searches for an integer.
 * @array: The array
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: returns the index of the first element for which the cmp function
 * does not return 0. If no element matches, return -1, If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1)
}
