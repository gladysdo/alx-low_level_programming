#include "lists.h"
#include <stdlib.h>


/**
 * free_listint_safe -  frees a listint_t list.
 * @h: pointer
 *
 * Return: list as a number
 */
size_t free_listint_safe(listint_t **h)
{
	size_t list = 0;
	int q;
	listint_t *new;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		q = *h - (*h)->next;
		if (q > 0)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
			list++;
		}
		else
		{
			free(*h);
			*h = NULL;
			list++;
			break;
		}
	}
	*h = NULL;
	return (list);
}
