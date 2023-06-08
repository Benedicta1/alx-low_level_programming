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
	int e, count = 0;
	unsigned long int ben;
	unsigned long int bene = n ^ m;

	for (e = 63; e >= 0; e--)
	{
		ben = bene >> e;
		if (ben & 1)
			count++;
	}
	return (count);
}
