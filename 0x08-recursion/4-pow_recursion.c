#include "main.h"

/**
 * _pow_recursion - function that return the value of x raised to thepower of y
 * @x: the value we are to raise
 * @y: raise to the power of y
 * Return: the result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
