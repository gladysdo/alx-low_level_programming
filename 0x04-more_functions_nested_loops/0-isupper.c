#include "main.h"

/**
 * _isupper - function to check code
 * @c: parameter function
 *
 * Return: always 0
 */

int _isupper(int c)
{
	if (c <= 65 && c <= 90)
		return (1);
	else
		return (0);
}
