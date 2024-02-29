#include "main.h"

/**
* print_most_numbers - prints (0 to 9), without 2 and 4
*
* Return: nothing
*/
void print_most_numbers(void)
{
	int i = 0;
	int flag = 0;

	while (i < 10)
	{
		if (i != 0 && i % 2 == 0 && flag < 2)
		{
			flag++;
			i++;
			continue;
		}
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
