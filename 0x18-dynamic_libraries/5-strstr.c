#include "main.h"

/**
 * _strstr -  function that locates a substring
 * @haystack: pointers
 * @needle: pointer
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *q = needle;

		while (*k == *q && *q != '\0')
		{
			k++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
	}
	return (0);
}
