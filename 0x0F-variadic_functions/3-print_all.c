#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Short description
 * @format: element
 *
 * Description
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *formated;
	int flag, i = 0;

	va_start(valist, format);
	while (format[i] != '\0')
	{
		flag = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			formated = va_arg(valist, char *);
				if (formated == NULL)
				{
					printf("nil");
					break;
				}
			printf("%s", formated);
			break;
		default:
			flag = 0;
			break;
		}
		if (flag == 1 &&  format[i + 1] != 0)
			printf(", ");
		i++;
	}
		printf("\n");
		va_end(valist);
}
