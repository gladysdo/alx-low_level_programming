#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a linked
 * @h: head pointer of node
 * Return: element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		h = h->next;
		count_node++;
	}
	return (count_node);
}
