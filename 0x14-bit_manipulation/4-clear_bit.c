#include "main.h"

/**
 * clear_bit - sets value of the given bit to 0
 * @n: pointer
 * @index: index
 *
 * Return: 1 if success or -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
