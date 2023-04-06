#include "main.h"

/**
 * is_prime_number - prime numbers
 * @n: parameter
 * Return: 0
 */

int is_prime_number(int n)
{
	int i;

	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
		return (0);
	else
		return (_prime_number(n, i - 1));
}
