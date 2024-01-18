#include <stdlib.h>
#include <stdio.h>
#include "math.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b:number of bytes allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
