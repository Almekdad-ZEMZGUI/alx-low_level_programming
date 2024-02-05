#include "lists.h"

/**
 * insert_nodeint_at_index - s inserts a new node at a given position
 *@head: pointer to first element
 *
 *Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	listint_t *temp2 = *head;
	unsigned int i = 0, j = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp2)
	{
		temp2 = temp2->next;
		j++;
	}
	
	if (idx >= j)
	{
		free (new);
		return (NULL);
	}
	while (temp && i != idx - 1)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
