#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: argument function
 * @av: pointers
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, q;
	int lent = 0;
	int k = 0;
	char *s;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (q = 0; av[i][q]; q++)
		{
			lent++;
		}
		lent++;
	}
	s = malloc(sizeof(char) * (lent + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (q = 0; av[i][q]; q++)
		{
			s[k++] = av[i][q];
		}
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
	return (0);
}
