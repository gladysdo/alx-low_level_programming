#include <stdio.h>
/**
 * main - main function
 *
 * Return: alway 0
 */

int main(void)
{
	int i = 48;
	int g = 57;

	while (i <= g)
	{
		putchar(i);
		i++;
		if (i < 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
