#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a new node at a given position
 *@head: pointer to first element
 *@idx: the index of the node should be deleted
 *
 *Return: 1 on succeed, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp2 = *head;
	listint_t *curr = NULL;
	unsigned int i = 0, j = 0;

	while (temp2)
	{
		j++;
		temp2 = temp2->next;
	}
	free(temp2);

	if (j < index)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp && i != index - 1)
	{
		i++;
		temp = temp->next;
	}
	curr = temp->next;
	temp->next = curr->next; 
	free(curr);
	return (1);
}
