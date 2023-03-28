#include "main.h"

/**
 * puts2 - function print character of string
 * @str:  parameter funtion
 * Return: 0
 */

void puts2(char *str)
{
	int q;

	for (q = 0; str[q] != '\0'; q++)
	{
		_putchar(str[q]);
		q++;
	}
	_putchar('\n');
}
