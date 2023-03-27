#include "main.h"

/**
 * swap_int - swap values of two integer
 * @a: pointer parameter
 * @b: pointer parameter function
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
