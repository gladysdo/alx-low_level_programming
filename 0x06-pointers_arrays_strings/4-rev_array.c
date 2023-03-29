#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter
 * @n: parameter
 * Return: 0
 */


void reverse_array(int *a, int n)
{
	int i;
	int q;

	for (i = 0; i < n / 2; i++)
	{
		q = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = q;
	}
}
