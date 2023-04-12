#include "main.h"
#include <stdlib.h>

int count_words(char *str)
{
	int c = 0;
	int i = 0;
	if (str == NULL || *str == '\0')
	{
		return (0);
	}
	if (str[0] != ' ')
	{
		c++;
	}
	while (str[i])
	{
		if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
		{
			c++;
		}
		i++;
	}
	return (c);
}

char **strtow(char *str)
{
	int j = 0;
	int lent;
	char **letters

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int word_count = count_words(str);

	letters = malloc(sizeof(char *) * (word_count + 1));
	
	if (letters == NULL)
	{
		return (NULL);
	}
	if (str[0] != ' ')
	{
		j = 0;
		lent = 0;

		while (str[j] = 0)
	}
	return (0);
}
