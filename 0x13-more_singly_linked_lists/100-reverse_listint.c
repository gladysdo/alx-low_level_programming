#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: dounle pointers
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL, *old;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		old = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = old;
	}
	*head = new;
	return (*head);
}
