#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the node
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = NULL;
	}
}
