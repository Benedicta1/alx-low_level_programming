#include "main.h"
#include <unistd.h>
/**
 * _putchar - this writes the character c to stdout
 * @c: This is the character to print
 * Return: Always success is 1
 * On error, -1 is returned , and errno is set appropraitely.
 */
int _putchar(char c)
	return (write(1, &c, 1));
