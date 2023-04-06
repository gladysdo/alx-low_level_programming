#include "main.h"

/**
 * is_prime_number - prime numbers
 * actual_prime - calculating the prime number
 * @i: parameter
 * @n: parameter to evalute
 * Return: 0
 */

int actual_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
