#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: number of times the character _ should be printed
*
* Return: nothing
*/
void print_line(int n)
{
	if (n > 0)
	{
		while (n)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}

