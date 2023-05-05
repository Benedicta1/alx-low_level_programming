#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
  /*
   * Put your line of codes here
   * Note:
   * You are not allowed to use a
   * You are not allowed to modify p
   * Write only one statement
   * You are not allowed to code anything else than this line of code
   */
	p[5] = 98;
	/* ...so that it prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
