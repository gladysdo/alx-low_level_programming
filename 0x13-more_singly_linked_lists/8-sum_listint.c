#include "lists.h"

/**
 * sum_listint -  sum of all the data (n) of a listint_t linked list.
 * @head: a pointer to the head of list
 * Return: sum
 */


int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
