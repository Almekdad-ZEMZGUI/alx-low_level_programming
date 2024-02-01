#include "lists.h"

/**
 * list_len - returns the elements of linked list
 * @h: pointer to the head of the linked list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

