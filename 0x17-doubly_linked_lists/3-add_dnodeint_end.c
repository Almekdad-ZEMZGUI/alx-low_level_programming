#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the doubly linked list
 * @n: value to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newNode = malloc(sizeof(dlistint_t));

	if (!head || !newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}

