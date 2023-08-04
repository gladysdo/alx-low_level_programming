#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - value of a bit to 0 at a given index
 * @n: pointers of binary
 * @index: starting from 0 of the bit you want to set
 *
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
