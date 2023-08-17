#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end -  new node at the end of a dlistint_t list
 * @head: pointer to node
 * @n: intiger value
 * Return: new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		new_node->prev = curr_node;
		curr_node->next = new_node;
	}
	return (new_node);
}
