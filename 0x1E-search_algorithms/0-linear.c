#include "search_algos.h"

/**
 * linear_search - searches for array
 * @array: pointer to first element
 * @size: number of elements
 * @value: value to search for
 * Return: your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = -1;

	if (!array)
		return (index);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			index = (int)i;
			break;
		}
	}

	return (index);
}
