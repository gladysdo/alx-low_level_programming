#include "function_pointers.h"



void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(arry);
		arry++;
	}
}
