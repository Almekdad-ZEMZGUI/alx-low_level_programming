#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the elements of linked list
 * @h: pointer
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
