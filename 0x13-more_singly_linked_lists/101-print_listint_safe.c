#include "lists.h"

/**
 *print_listint_safe - prints a listint_t linked list
 *@head: pointer to first element
 *
 *Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t count = 0;

    while (hare != NULL && hare->next != NULL)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        count++;

        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
            return count;
        }
    }

    return count;
}
