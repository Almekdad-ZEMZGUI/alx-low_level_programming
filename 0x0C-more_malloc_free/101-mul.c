#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - checks if a character is digit
 * @c: character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of string
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _multiply - multiply two numbers
 * @s1: the first number
 * @s2: the second number
 *
 * Return: product number string
 */
char *_multiply(char *s1, char *s2)
{
	char *r;
	int length1, length2, i, j, c, x;

	length1 = _strlen(s1);
	length2 = _strlen(s2);
	r = malloc(length1 + length2);
	i = x = length1 + length2;
	if (r == NULL)
		printf("Error\n"), exit(98);
	while (i--)
		r[i] = 0;
	for (length1--; length1 >= 0; length1--)
	{
		if (!_isdigit(s1[length1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		i = s1[length1] - '0';
		c = 0;

		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			if (!_isdigit(s2[length2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			j = s2[length2] - '0';

			c += r[length1 + length2 + 1] + (i * j);
			r[length1 + length2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[length1 + length2 + 1] += c;
	}
	return (r);
}

/**
 * main - multiply two numbers
 * @argc: number arguments
 * @argv: argument vector
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	char *r;
	int i, c, x;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = _multiply(argv[1], argv[2]);
	c = 0;
	i = 0;
	while (c < x)
	{
		if (r[c])
			i = 1;
		if (i)
			_putchar(r[c] + '0');
		c++;
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
