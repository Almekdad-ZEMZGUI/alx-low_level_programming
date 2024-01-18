#include <stdlib.h>
#include <stdio.h>
#include "math.h"
/**
 * create_pointer - pointer to allocates memory
 * @b: int
 * Description: allocate memory
 * Return: pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
