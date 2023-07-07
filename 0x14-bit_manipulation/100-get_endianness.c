#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *byte = (char *)&value;

	if (*byte == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
