#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This function initializes an integer array 'a', sets a value in it,
 * creates an integer variable 'n', and a pointer 'p' pointing to 'n'.
 * Using a single line of code, it indirectly modifies 'n' through 'p'.
 * Finally, it prints the modified value of 'a[2]'.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * - write your line of code here...
	 * - Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
