#include <stdio.h>

/**
 * main - main function
 *
 * Return: alway 0
 **/

int main(void)
{
	int a1;
	int b2;
	int c3;

	for (a1 = 0; a1 <= 7; a1++)
	{
		for (b2 = a1 + 1; b2 <= 8; b2++)
		{
			for (c3 = b2 + 1; c3 <= 9; c3++)
			{
				putchar(a1 + '0');
				putchar(b2 + '0');
				putchar(c3 + '0');
				if (a1 != 7 || b2 != 8 || c3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
