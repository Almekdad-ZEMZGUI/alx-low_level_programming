#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line
* @size: the size of the triangle
*
* Return: nothing
*/
void print_triangle(int size)
{
	int i, j, cpy;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	cpy = size;
	while (size)
	{
		i = size - 1;
		j = cpy - i;
		while (i)
		{
			_putchar(' ');
			i--;
		}
		while (j)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		size--;
	}
}

