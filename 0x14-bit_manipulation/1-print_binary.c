#include "main.h"
#include <stdio.h>

/**
 * print_binary -  representation of a number
 * @n: parameter function
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int numBits = sizeof(n) * 8;
	int shift = numBits - 1;
	unsigned long int mask =  (unsigned long int)1 << shift;
	int leadingZeroes = 1;

	while (shift >= 0)
	{
		if (n & mask)
		{
			putchar('1');
			leadingZeroes = 0;
		}
		else
		{
			if (!leadingZeroes)
			{
				putchar('0');
			}
		}
		mask >>= 1;
		shift--;
	}
	if (leadingZeroes)
	{
		putchar('0');
	}
}
