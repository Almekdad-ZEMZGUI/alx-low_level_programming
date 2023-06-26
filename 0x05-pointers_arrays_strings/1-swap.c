#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function swaps the values of the integers
 *              pointed to by the given pointers.
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
