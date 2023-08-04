#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointer to string
 *
 * Return: integery or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			total = total << 1;
			if (b[i] == '1')
				total = total | 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (total);
}
