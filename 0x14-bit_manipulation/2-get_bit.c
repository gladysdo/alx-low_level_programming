#include "main.h"
#include <stdlib.h>

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: parameter
 * @index: is the index, starting from 0
 *
 * Return: index and 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
