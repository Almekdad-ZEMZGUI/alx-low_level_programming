#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*
* Return: nothing
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i < n)
	{
		j = i;
		while (j)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}

