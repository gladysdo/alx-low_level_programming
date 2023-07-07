#include "main.h"

/**
 * unsigned int binary_to_unit: main function
 * @b: parameter of a function
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return 0;
		result = (result << 1) + (b[i] - '0');
	}
	return result;
}
