#include "main.h"
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *callocm = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	callocm = malloc(nmemb * size);
	if (callocm)
	{
		memset(callocm, 0, nmemb * size);
	}
	if (!callocm)
	{
		return (NULL);
	}
	return (callocm);
}
