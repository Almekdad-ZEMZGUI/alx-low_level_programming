#include <stdlib.h>
#include "math.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the concatenates string, NULL on failure
 */
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, length1, length2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = length2 = 0;

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	ptr = malloc(sizeof(char) * (length1 + n) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		ptr[length1] = s2[j];
		length1++;
	}

	ptr[length1] = '\0';

	return (ptr);
}
