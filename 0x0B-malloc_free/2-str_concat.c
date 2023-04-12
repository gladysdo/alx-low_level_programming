#include "main.h"
#include <stdlib.h>
#include <string.h>


char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char  *concat;

	if ( s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	concat = (char *) malloc(s1 + s2 + 1) * sizeof(char);

			if (concat == NULL)
			{
				return (NULL);
			}
			for (i = 0; i < *s1; i++)
			{
				concat[i] = s1[i];
			}
			for (j = 0; j < *s2; j++)
			{
				concat[i + j] = s2[j];
			}
			concat[i + j] = '\0';
			return (concat);
			return (0);
}
