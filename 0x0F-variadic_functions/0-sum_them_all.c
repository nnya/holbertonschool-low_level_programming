#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Short description
 * @n: element
 *
 * Description
 * Return: nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum_them = 0;
	unsigned int i;

	va_start(valist, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum_them += va_arg(valist, int);
	}
	va_end(valist);
	return (sum_them);
}
