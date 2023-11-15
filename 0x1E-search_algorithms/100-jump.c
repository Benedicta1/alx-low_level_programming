#include "search_algos.h"
#include <math.h>


size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: the first value
 * @b: the second value
 * Return: if a lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - value in a sorted array of integers
 * @array: pointer to the first element 
 * @size: number of elements in array
 * @value: value to search for
 * Return:  return the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left, right, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (right = 0; right < size && array[right] < value;
	     left = right, right += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       right, array[right]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (; left <= min(right, size - 1); left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}

	return (-1);
}
