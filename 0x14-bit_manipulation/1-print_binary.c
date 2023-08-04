#include "main.h"
#include <stdlib.h>

/**
 * print_binary -function that prints the binary of a number.
 * @n: parameter
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
