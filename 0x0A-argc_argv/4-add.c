#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument function
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int j;
	int num;
	int i;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);

		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
