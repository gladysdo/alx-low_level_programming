#include "main.h"
#include <stdio.h>

/**
 * main -  program that prints its name
 * @argc: number of string entered
 * @argv: an array of string
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
