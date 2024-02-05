#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int main(void)
{
        listint_t *A;
        listint_t *B;
        listint_t *C;
	listint_t *temp;

        A = malloc(sizeof(listint_t));
        B = malloc(sizeof(listint_t));
        C = malloc(sizeof(listint_t));

        A->n = 1;
	B->n = 2;
	C->n = 3;

 	A->next = B;
	B->next = C;
	C->next = NULL;

	temp = A->next;
	while(temp)
	{
		printf("%d \n", temp->n);
		temp = temp->next;
	}
        
        return (0);

}
