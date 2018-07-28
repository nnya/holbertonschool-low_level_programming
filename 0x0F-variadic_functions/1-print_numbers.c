#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Short description
 * @separator: element
 * @n: element
 *
 * Description
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{

		if (i != n - 1)
		{
			printf("%d%s", va_arg(valist, int), separator);
		}
		else
		{
			printf("%d", va_arg(valist, int));
		}
	}
	va_end(valist);
	printf("\n");
}
