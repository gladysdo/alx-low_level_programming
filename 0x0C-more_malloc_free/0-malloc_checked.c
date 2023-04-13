#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void *malloc_checked(unsigned int b)
{
	void *ptr;
	unsigned int i;

	for (i = 0; i < b; i++)
	{
		ptr = malloc(b);
		if (ptr == NULL)
		{
			write(STDERR_FILENO, "Error: malloc failed\n", 21);
			exit(98);
		}
	}
	return ptr;
}
