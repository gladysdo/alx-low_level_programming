#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of string
 * @argv: arry of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, multy;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		multy = num1 * num2;
		printf("%d\n", multy);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
