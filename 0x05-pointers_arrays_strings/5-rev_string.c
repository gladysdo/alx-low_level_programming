#include "main.h"

/**
 * rev_string - function to reverse string 
 * @s: parameter function
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0';)
		count++;

	for (i = count; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
