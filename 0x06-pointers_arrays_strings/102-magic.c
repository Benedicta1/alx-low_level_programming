#include <stdio.h>
/**
 * main - This is your line of code
 * Return: Always 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/**
	 * Kindly note:
	 * You are not allowed to use the letter a
	 * You are not allowed to modify letter p
	 * You can only write oe statement
	 * You are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);

	return (0);
}
