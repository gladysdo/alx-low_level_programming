#include "main.h"

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
