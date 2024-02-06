#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely
 * @h: pointer to the first element of the linked list
 *
 * Return: number of elements in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int diff;
	listint_t *temp;

	if (h == NULL || (*h)->next == NULL)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}

