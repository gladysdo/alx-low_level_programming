#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (1);
	}
	unsigned char *opcodes = (unsigned char *)main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcodes[i]);
	}
	printf("\n");
	return (0);
}
