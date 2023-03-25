#include "main.h"

/**
 * print_line - function to draws a straight line in the terminal.
 *
 * Return : always 0
 */
void print_line(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			_putchar('-');
			count++;
		}
		_putchar('\n');
	}
}
