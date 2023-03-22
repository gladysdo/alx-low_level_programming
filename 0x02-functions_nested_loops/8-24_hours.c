#include "main.h"

/**
 *jack_bauer - check function code print time
 *
 *Return: always 0
 */

void jack_bauer(void)
{
	int k;
	int q;

	for (k = 0; k < 24; k++)
	{
		for (q = 0; q < 60; q++)
		{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(':');
			_putchar(q / 10 + '0');
			_putchar(q % 10 + '0');
			_putchar('\n');
		}
	}
}
