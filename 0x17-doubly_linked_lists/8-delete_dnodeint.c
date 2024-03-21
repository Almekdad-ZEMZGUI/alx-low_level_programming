#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
* @head: head of the doubly liknked list
* @index: the index of the node that should be deleted
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        dlistint_t *temp = *head;
	unsigned int i;

        if (!*head || !head)
                return (-1);

        if (index == 0)
        {
                *head = temp->next;
                free(temp);
                return (1);
        }

        for(i = 0; temp && i < index; i++)
                temp = temp->next;

        if (temp == NULL)
                return (-1);

        if (temp->prev)
                temp->prev->next = temp->next;
        if (temp->next)
                temp->next->prev = temp->prev;
        free(temp);
        
        return (1);
}
