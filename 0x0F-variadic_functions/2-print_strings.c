#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Short description
 * @separator: element
 * @n: element
 *
 * Description
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *string;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char *);

		if (string == NULL)
		{
			printf("nil");
		}
		else
		{
			if (i + 1 < n)
			{
			printf("%s%s", string, separator);
			}
			else
			{
				printf("%s", string);
			}
		}
	}
	printf("\n");
	va_end(valist);
	printf("\n");
}
