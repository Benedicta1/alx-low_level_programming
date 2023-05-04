#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the array being reversed
 * @n: the number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int b, c, tmp;

	c = n - 1;

	for (b = 0; b < n / 2; b++)
	{
		tmp = a[b];
		a[b] = a[c];
		a[c--] = tmp;
	}
}
