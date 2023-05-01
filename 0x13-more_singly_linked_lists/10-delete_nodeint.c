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
	listint_t *new, *del = *head;
	unsigned int node;

	if (del == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (del->next == NULL)
			return (-1);
		del = del->next;
	}
	new = del->next;
	del->next = new->next;
	free(del);
	return (1);
}
