#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
	unsigned int nn;

	nn = n;

	if (n < 0)
	{
		_putchar('-');
		nn = -n;
	}

	if (nn / 10 != 0)
	{
		print_number(nn / 10);
	}
	_putchar((nn % 10) + '0');
}

