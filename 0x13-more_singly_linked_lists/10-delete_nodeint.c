#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a new node at a given position
 *@head: pointer to first element
 *@index: the index of the node should be deleted
 *
 *Return: 1 on succeed, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curr = NULL;
	unsigned int i = 0, j = 0;

	if (*head == NULL)
		return (-1);

	while (temp)
	{
		j++;
		temp = temp->next;
	}

	if (j <= index)
		return (-1);

	temp = *head;
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
	if (!temp || !temp->next)
		return (-1);
	curr = temp->next;
	temp->next = curr->next;
	free(curr);
	return (1);
}
