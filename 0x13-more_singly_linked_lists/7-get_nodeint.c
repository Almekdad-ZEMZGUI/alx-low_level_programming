#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index in a linked list
 * @head: first node
 * @index: index
 *
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	while (head && i != index)
	{
		i++;
		head = head->next;
	}
	return(head);
}
