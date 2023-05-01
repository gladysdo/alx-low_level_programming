#include "lists.h"
#include <stdlib.h>


void free_listint2(listint_t **head)
{
	listint_t *start;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	i = start->i;
	free(star);
	return (i);
}
