#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main function
 *
 * Return: always 0
 **/

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* using modulo to find the last digit */
	m = n % 10;
	if (m > 5)
		printf("last digit is %d and %d is greater than 5", n, m);
	else if (m == 0)
		printf("last digit is %d and %d is is 0", n, m);
	else if( m < 6 && m != 0)
		printf("last digit is %d and %d is less than 6 amd not 0", n, m);
	printf("\n");
	return (0);
}
