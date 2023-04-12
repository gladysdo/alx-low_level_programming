#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strdup - pointer to a newly allocated space in memory
 * @str: parameter of array
 *Return: nst
 */

char *_strdup(char *str)
{
	char *nst;

	if (str == NULL)
	{
		return (NULL);
	}
	nst = (char *) malloc(strlen(str) + 1);

		if (nst == NULL)
		{
			return (NULL);
		}
		strcpy(nst, str);
		return (nst);
		return (0);
}
