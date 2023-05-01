#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: head of a list
 * @index: parameter
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int new;

	for (new = 0; new < index; new++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
