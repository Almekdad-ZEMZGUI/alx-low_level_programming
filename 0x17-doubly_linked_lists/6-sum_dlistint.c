#include "lists.h"

/**
* sum_dlistint - sum of all the data (n) of a dlistint_t linked list
* @head: head of the doubly linked list
*
* Return: sum of all the data (n), or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sumAll = 0;

	while (head)
	{
		sumAll += head->n;
		head = head->next;
	}
	return (sumAll);
}

