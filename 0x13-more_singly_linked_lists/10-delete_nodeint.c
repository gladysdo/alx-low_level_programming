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
	listint_t *new, *old = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(old);
		return (1);
	}
	old = old->next;
	new = (*head)->next;
	while (new != NULL)
	{
		if (count == index)
		{
			new->next = new->next;
			free(new);
			return (-1);
		}
		new = old->next;
		old->next = new->next;
		count++;
	}
	return (1);
}
