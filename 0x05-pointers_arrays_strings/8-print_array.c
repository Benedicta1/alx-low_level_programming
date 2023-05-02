#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: the array
 * @n: number of elements of the array to be printed
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
		printf("\n");
}
