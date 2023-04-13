#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: array of pointer
 * @s2: array of pointer
 * @n: parameter function
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lent1;
	unsigned int lent2;
	char *concat;

	lent1 = (s1 != NULL) ? strlen(s1) : 0;
	if (s2 == NULL)
	{
		s2 = "";
	}
	lent2 = strlen(s2);
	if (n >= lent2)
	{
		n = lent2;
	}
	concat = malloc(lent1 + n + 1);
	if (concat)
	{
		if (s1)
		{
			strcpy(concat, s1);
		}
		strncat(concat, s2, n);
	}
	return (concat);
	return (0);
}

