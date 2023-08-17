#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_node++;
	}
	return (count_node);
}
