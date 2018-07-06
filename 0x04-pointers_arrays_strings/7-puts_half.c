#include "holberton.h"

/**
 * puts_half - printing half of string
 * @str: element
 * Description: changing the value of a pointer
 * section header: prototype in holberton
 * Return: might be 0
 */
void puts_half(char *str)

{
	int i, length;

	for (length = 0; str[length] != '\0'; length++)
		;
	for (i = length / 2; i < length; i++)

		_putchar(str[i]);
	_putchar('\n');
}
