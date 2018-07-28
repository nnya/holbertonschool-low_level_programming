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
	while (format[i] != '\0' && format != NULL)
	{
		flag = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			flag = 1;
			break;
		case 's':
			formated = va_arg(valist, char *);
				if (formated == NULL)
				{
					printf("(nil)");
					flag = 1;
					break;
				}
			printf("%s", formated);
			flag = 1;
			break;
		default:
			break;
		}
		if (flag == 1 &&  format[i + 1] != 0)
			printf(", ");
		i++;
	}
		printf("\n");
		va_end(valist);
}
