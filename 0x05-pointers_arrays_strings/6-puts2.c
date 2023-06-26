#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	char *a = str;
	int i;

	while (*a != '\0')
	{
		a++;
		length++;
	}
	for (i = 0 ; i <= length - 1 ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
