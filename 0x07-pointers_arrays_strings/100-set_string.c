#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: pointer we need to set to
 * @to: the string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
