#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head of double pointers
 * Return: head
 *
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *old;

	if (head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	old = NULL;
	while (new != NULL)
	{
		old = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = old;
	}
	*head = new;
	return (*head);
}
