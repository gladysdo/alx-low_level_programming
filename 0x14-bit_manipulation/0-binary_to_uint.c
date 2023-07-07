#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary number
 * @b: parameter of a function
 * Return: result
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t length = strlen(b);
	size_t i;

	if (b == NULL)
		return (0);
	for (i = 0; i < length; i++)
	{
		if (b[i] == '0')
		{
			result = (result << 1) + 0;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) + 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
