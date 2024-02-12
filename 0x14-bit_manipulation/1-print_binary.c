#include "main.h"

/**
 * _power - calculates power
 * @base: base
 * @pow: power
 *
 * Return: base**pow
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int res;
	unsigned int i;

	res = 1;
	for (i = 1; i <= pow; i++)
		res *= base;
	return (res);
}

/**
 * print_binary -  prints the binary representation of a number
 * @n: number to print
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, checker;
	char flag;

	flag = 0;
	div = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		checker = n & div;
		if (checker == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}

