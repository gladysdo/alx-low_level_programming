#include "main.h"

/**
 * _puts - function to print string
 * @str: ponter parameter
 * Return : 0
 */

void _puts(char *str)
{
	int q;

	for (q = 0; str[1] != '\0'; q++)
		_putchar(str[1]);
	_putchar('\n');
}
