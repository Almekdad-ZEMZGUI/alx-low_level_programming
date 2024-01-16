#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memorylocation
 * @str: char
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;
	int i ,length = 0;

	if (str == NULL)
		return NULL;

	while (str[length] != '\0')
		length++;

	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		ptr[i] = str[i];

	return ptr;
}
