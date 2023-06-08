#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: The first number
 * @m: The second number
 * Return: The number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ben;

	for (ben = 0; n || m; n >> = 1, m >> = 1)
	{
		if ((n & 1) != (m & 1))
			ben++;
	}

	return (ben);
}
