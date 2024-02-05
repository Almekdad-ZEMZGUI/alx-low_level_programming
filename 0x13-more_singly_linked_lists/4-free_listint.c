#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the first node in list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

