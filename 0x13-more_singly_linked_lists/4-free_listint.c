#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: head link of a list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *frees;

	while (head != NULL)
	{
		frees = head->next;
		free(head);
		head = frees;
	}
}
