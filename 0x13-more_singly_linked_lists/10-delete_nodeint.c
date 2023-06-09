#include  "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  deletes the node at index in linked list.
 * @head: pointer to address of a list
 * @index: index of a deleted number
 * Return: 1 otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *old;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		old = (*head)->next;
		free(*head);
		*head = old;
		return (1);
	}
	new = *head;
	for (count = 0; count < index - 1; count++)
	{
		if (new->next == NULL)
			return (-1);
		new = new->next;
	}
		old = new->next;
		new->next = old->next;
		free(old);
		count++;
		return (1);
}
