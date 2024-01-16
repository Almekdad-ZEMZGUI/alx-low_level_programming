#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first input string
 * @s2: second input string
 * Return: pointer to the concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int length1 = 0;
	int length2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;
	ptr = (char *)malloc(sizeof(char) * (length1 + length2 + 1));

	if (ptr == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ptr[length1] = s2[j];
		length1++;
		j++;
	}
	return (ptr);
}
