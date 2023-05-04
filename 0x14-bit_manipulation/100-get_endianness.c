#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *endian_test = (char *) &num;

	if (*endian_test == 1)
	{
		return (1); /* little endian*/
	}
	else
	{
		return (0); /* big endian*/
	}
}
