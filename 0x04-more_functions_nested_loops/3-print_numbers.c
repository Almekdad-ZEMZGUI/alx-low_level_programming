#include "main.h"

/**
* print_numbers - prints numbers (0 to 9) followed by \n
*
* Return: nothing
*/
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}

