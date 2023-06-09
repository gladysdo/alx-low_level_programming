#include "lists.h"
#include <string.h>

/**
 * add_node - returns the number of elements in a linked list_t list
 * @head: a pointer to the head
 * @str: paramater to string
 * Return: new
 */

list_t *add_node(list_t **head, const char *str)
{
	char *node;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	node = strdup(str);
	if (node == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = node;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
