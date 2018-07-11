#include "holberton.h"

/**
 * print_rev - return the length of a string
 * @s: string
 * Description: calculating the string length
 * section header: prototype in holberton
 * Return: might be 0
 */

void print_rev(char *s)

{
	int count;

	count = 0;

	while (s[count] != '\0')
		++count;
	count = count - 1;

		while (count >= 0)
		{
			_putchar(s[count]);
		--count;
		}
	_putchar('\n');
}
