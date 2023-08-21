#include "main.h"

/**
 * _memcpy -  function that copies memory area
 * @dest: pointer of array
 * @src: pointer of array
 * @n: parameter function
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		src[i] = dest[i];
		n--;
	}
	return (dest);
}
