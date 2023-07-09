#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: arguments
 * @argv: array
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

