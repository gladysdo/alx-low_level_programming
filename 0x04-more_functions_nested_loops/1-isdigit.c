#include "main.h"

/**
 * _isdigit - function name to check digit numbers
 *
 * @c: parameter funtion
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
