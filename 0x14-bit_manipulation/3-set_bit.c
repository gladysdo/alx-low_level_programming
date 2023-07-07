#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: parameter function
 * @index: parameterfunction
 * Return: -1 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = sizeof(unsigned long int) * 8 - 1;
	unsigned long int mask = (1 << index);

	if (index > max_index)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}
