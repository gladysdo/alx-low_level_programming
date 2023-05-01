#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a link list
 * Return: element
 */


size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
