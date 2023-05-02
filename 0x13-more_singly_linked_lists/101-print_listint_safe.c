#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function can print lists with a loop
 * @head: A pointer to the head of a list
 * Return: 0 or a vaule
 */


size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t num = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				num++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				num++;
				tortoise = tortoise->next;
			}

			return (num);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer
 * Return: The number of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num, index = 0;

	num = looped_listint_len(head);

	if (num == 0)
	{
		for (; head != NULL; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < num; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num);
}
