#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: parameter
 * Return:0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i;
	float f;
	char c;
	int j = 0;

	va_start(args, format);
	do {
		switch (format[j]);
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
			case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
			case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
			break;
			default:
			break;
		}
		j++;
	} while (format[j]);
	printf("\n");
	va_end(args);
}
