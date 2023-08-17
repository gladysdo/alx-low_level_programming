#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: arry of a pointer
 * @idx: integer values
 * @n: data of node
 * Return: null ,otherwise new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr_node = *h;
	unsigned int i;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*h == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && curr_node != NULL; i++)
	{
		curr_node = curr_node->next;
	}
	if (curr_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = curr_node;
	new_node->next = curr_node->next;

	if (curr_node->next != NULL)
	{
		curr_node->next = new_node;
		curr_node->prev = new_node;
	}
	curr_node->next = new_node;
	return (new_node);
}
