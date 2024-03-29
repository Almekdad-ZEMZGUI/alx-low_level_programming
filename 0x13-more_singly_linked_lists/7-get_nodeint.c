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
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp && i != index)
	{
		i++;
		temp = temp->next;
	}
	if (!temp)
		return (NULL);

	return (temp);
}
