#include "main.h"

/**
 * print_rev - print reverse string
 * @s: parameter function
 * Return: 0
 */

void print_rev(char *s)
{
	int q;
	int sum;

	for (q = 0; s[q] != '\0'; q++)
		sum++;
	{
	for (q = sum; q >= 0; q--)
		_putchar(s[q]);
	}
	_putchar('\n');
}