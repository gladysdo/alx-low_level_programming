#include "main.h"

/**
 *print_sign - check code
 *
 *@n: parameter function
 *Return: 1 if n is greater than 0, if n is equal to 0 print 0 otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(1);
		_putchar(' ');
		return (-1);
	}
}
