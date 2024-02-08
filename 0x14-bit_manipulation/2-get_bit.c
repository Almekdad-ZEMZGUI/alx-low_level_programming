#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: index
 *
 * Return: value of the bit, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	div = 1 << index;
	checker = n & div;

	if (check == divisor)
		return (1);

	return (0);
}
