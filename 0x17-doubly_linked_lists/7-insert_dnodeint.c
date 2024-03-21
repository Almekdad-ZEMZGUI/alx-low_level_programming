#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the doubly linked list
 * @idx: the index of the list where the new node should be added
 * @n: value to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}

