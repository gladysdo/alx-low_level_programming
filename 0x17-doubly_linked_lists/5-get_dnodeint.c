#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer
 * @index: integer values
 * Return: null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int curr_indx = 0;

	while (head != NULL)
	{
		if (curr_indx == index)
		{
			return (head);
		}
		head = head->next;
		curr_indx++;
	}
	return (NULL);
}
