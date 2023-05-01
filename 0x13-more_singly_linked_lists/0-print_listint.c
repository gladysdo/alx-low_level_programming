#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint -  prints all the elements of list
 * @h: head of a link
 * Return: element
 */

size_t print_listint(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elem++;
	}
	return (elem);
}
