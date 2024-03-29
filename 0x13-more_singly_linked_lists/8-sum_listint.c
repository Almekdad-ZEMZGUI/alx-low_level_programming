#include "lists.h"

/**
 * sum_listint - sum of all data (n) in linked list
 *@head: pointer to first element
 *
 *Return: sum of all the data (n) of a listint_t linked list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
