#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: parameter
 * @max: parameter
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *arr_inter;
	int s;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	s = max - min + 1;
	arr_inter = malloc(s * sizeof(int));
	if (!arr_inter)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		arr_inter[i] = min + i;
	}
	return (arr_inter);
	return (0);
}
