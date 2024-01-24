#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: The array
 * @size: Size of the array
 * @cmp: Pointer to the function
 *
 * Return: The index, or -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
