#include "main.h"

/**
 * print_numbers - printing numbers from 0 to 9
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int start = 0, end = 9;
		while (start <= end)
		{
			_putchar(start + '0');
			start++;
		}
	_putchar('\n');
}
