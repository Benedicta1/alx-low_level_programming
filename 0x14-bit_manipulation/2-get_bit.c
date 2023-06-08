#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: represents the unsigned long int
 * @index: starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int e;

	if (n == 0 && index < 65)
		return (0);

	for (e = 0; e <= 64; n >>= 1, e++)
	{
		if (index == e)
		{
			return (n & 1);
		}
	}
	return (-1);
}
