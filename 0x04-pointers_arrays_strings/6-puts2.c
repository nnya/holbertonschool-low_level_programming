#include "holberton.h"

/**
 * puts2 - update the value
 * @str: string
 *Description: changing the value of a pointer
 * section header: prototype in holberton
 */
void puts2(char *str)

{
	int number;

	for (number = 0; str[number] != '\0'; number++)
	{
		if (str[number] % 2 == 0)
			_putchar(str[number]);
	}
		_putchar('\n');
}
