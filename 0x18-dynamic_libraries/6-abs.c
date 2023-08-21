#include "main.h"

/**
 * _abs - check code of absolute value
 * @v: parameter functon
 *
 * Return: v when successful
 */

int _abs(int v)
{
	if (v < 0)
		v = -(v);
	else if (v >= 0)
		v = v;
	return (v);
}
