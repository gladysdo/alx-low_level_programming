#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: parameter function
 * Return 0
 */

void print_chessboard(char (*a)[8])
{
	int q;
	int i;

	for (q = 0; q < 8; q++)
	{
		for (i = 0; i < 8; i++)
			_putchar(a[q][i]);
		_putchar('\n');
	}
}
