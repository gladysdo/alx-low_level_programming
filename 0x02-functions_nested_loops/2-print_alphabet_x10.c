#include "main.h"

/**
 *print_alphabet_x10 - function print alphabet ten times
 */

void print_alphabet_x10(void)
{
	int (k);
	char (q);
	for (k = 1; k <= 10; k++)
	{
		for (q = 'a'; q <= 'z'; q++)
			_putchar(q);
		_putchar('\n');
	}
}
