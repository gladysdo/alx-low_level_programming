#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointers of a list
 * @idx: parameter
 * @n: parameter
 * Return: new
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *old = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	new->n = n;
	if (idx == 0)
	{
		new->next = old;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (old == NULL || old->next == NULL)
			return (NULL);
		old = old->next;
	}
	new->next = old->next;
	old->next = new;

	return (new);
}
