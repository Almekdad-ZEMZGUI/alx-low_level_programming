#include "main.h"

/**
 * more_numbers - prints 10 times the number (0 to 14)
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			if (j / 10)
				_putchar(48 + (j / 10));
			_putchar(48 + (j % 10));
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}

