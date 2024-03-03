#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143,
 *       followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long d = 2;

	while (d < n)
	{
		if (n % d == 0)
		{
			n /= div;
			div++;
		} else
			div++;
	}
	printf("%lu\n", n);

	return (0);
}

