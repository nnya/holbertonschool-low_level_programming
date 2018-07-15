#include "holberton.h"



/**
 * _puts - return the length of a string
 * @str: string
 * Description: calculating the string length
 * section header: prototype in holberton
 * Return: might be 0
 */

void _puts(char *str)
{

	int count;
	count = 0;

	while (str[count] != '\0')

	{
		_putchar(str[count]);
		++count;
	}

	_putchar('\n');

}
