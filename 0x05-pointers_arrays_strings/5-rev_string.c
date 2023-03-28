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

	for (i = 0; s[1] != '\0'; i++)
		count++;
	for (i = count; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
