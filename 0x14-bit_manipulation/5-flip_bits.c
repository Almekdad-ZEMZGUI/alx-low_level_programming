#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr, a = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = a >> i;
		if (curr & 1)
			count++;
	}

	return (count);
}

