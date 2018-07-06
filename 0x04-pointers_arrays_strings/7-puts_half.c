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
	length = length + 1;
	for (i = length / 2; str[i] != '\0'; i++)

		_putchar(str[i]);
	_putchar('\n');
}
