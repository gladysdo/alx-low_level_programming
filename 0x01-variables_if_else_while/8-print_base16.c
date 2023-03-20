#include <stdio.h>
/**
 * main -main function
 *
 * Return: always 0
 */

int main(void)
{
	int (i);
	char (q);
	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (q = 'a' ; q <= 'f' ; q++)
		putchar(q);
	putchar('\n');
	return (0);
}

