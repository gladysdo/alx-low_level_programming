#include "main.h"

/**
 *_isalpha - function that  check lowercase
 *
 *@c - parameter to be printed
 *
 *Return: 1 if it is lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c >= 122)
		return (1);
	else
		return (0);
}
