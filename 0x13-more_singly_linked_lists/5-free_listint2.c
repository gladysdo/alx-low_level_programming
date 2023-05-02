#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of a list
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return ;
	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	head = NULL;
}
