#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * @n: value to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	if (*head)
		(*head)->prev = newNode;
	else
		newNode->prev = NULL;
	(*head) = newNode;

	return (newNode);
}

