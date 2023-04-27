#include "lists.h"
#include <stddef.h>

/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: parameter
 * Return: len
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
