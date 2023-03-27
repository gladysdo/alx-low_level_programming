#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer parameter
 *
 *Return: the value sum
 */

int _strlen(char *s)
{
	int i;
	int sum;

	for (i = 0; s[1] != '\0'; i++)
	{
		sum++;
	}
	return (sum);
}
