#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This returns the sum of a and b.
 * @a: This is the first number.
 * @b: This is the second number.
 * Return: This returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This returns the difference of a and b
 * @a: This is the first number
 * @b: This is the second number.
 * Return: This returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This returns the product of a and b
 * @a: This is the first number
 * @b: This is the second number
 * Return: This returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This returns the division of a and b
 * @a: This is the first number
 * @b: This is the second number
 * Return: This returns the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This returns the remainder of the division of a and b
 * @a: This is the first number
 * @b: This is the second number
 * Return: This returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

