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
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum++;
	}
	return (sum);
}
