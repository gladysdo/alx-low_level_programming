#include <stdio.h>
/**
 * main - the main function
 *
 * Return: o when successful
 **/

int main(void)
{
	printf("size of char is : %ln byte(s)", sizeof(char));
	printf("size of int is : %ln byte(s)", sizeof(int));
	printf("size of long long : %ln byte(s)", sizeof(long long int));
	printf("size of long int :%ln byte(s)", sizeof(long int));
	return (0);

}
