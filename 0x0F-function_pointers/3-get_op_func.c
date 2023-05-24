#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - This file should contain the function that selects the
 * correct function to perform the operation asked by the user
 * You’re not allowed to declare any other function.
 * @s: This is the operator passed as argument to the program
 * Return: turns a pointer to the function that corresponds
 * to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
