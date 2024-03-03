#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int temp, z = 1, num = n;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			num = -n;
		}
		while (z <= num)
			z *= 10;
		z /= 10;

		while (z >= 1)
		{
			temp = num / z;
			_putchar(temp + 48);
			num = (num - (z * temp));
			z /= 10;
		}
	}
}

