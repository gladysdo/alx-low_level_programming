#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: parameter function
 * @index: parameter of a function
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int max_index = sizeof(unsigned long int) * 8 - 1;

	if (index > max_index)
		return (-1);

	mask = mask << index;
	return ((n & mask) ? 1 : 0);
}
