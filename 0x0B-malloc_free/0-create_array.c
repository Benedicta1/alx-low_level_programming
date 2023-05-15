#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: the size of the array
 * @c: the character to be assigned
 * Return: NULL if size = 0 and pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
