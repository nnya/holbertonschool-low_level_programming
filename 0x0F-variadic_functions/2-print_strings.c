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
			if (separator)
				printf("(nil)%s", separator);
			else
				printf("(nil)");
		}
		else
		{
			if (i + 1 < n)
			{
				if (separator)
					printf("%s%s", string, separator);
				else
					printf("%s", string);
			}
			else
			{
				printf("%s", string);
			}
		}
	}
	va_end(valist);
	printf("\n");
}
