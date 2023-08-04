#include "main.h"
#include <stdlib.h>


/**
 * flip_bits - flip to get from one number to another.
 * @n: parameter string
 * @m: parameter
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
