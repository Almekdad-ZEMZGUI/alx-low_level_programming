#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc and free
 *
 * @ptr: pointer to the old memory allocated
 * @old_size: the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 *
 * Return: pointer allocate new size memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *op = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;

	for (i = 0; i < n; i++)
		p[i] = op[i];

	free(ptr);
	return (p);
}
