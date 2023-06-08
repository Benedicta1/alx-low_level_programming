#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 * @n: This represents the unsigned int
 * @index: he index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int e;

	if (index > 64)
		return (-1);

	e = 1 << index;
	*n = (*n | e);

	return (1);
}
