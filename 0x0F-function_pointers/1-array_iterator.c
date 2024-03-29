#include "function_pointers.h"

/**
 * array_iterator -  executes a function on each element of an array
 * @array: The array
 * @size: Size of the array
 * @action: Pointer to a function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
