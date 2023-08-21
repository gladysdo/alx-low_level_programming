#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: pointer
 * @accept: parameter function
 * Return:the varible q
 */

unsigned int _strspn(char *s, char *accept)
{
	int i ;
	int q = 0;
	while(s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[i] == accept[i])
			{
				q++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return(q);
		}
		s++;
	}
	return (q);
}
