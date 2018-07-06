#include "holberton.h"

/**
 * swap_int - update the value
 * @number: character to print
 * Description: changing the value of a pointer
 * section header: prototype in holberton
 * Return: might be 0
 */
void puts2(char *str)

{
	int number;

	for (number = 0; str[number] != '\0'; number++)
	{
		if(str[number] % 2 == 0)
			_putchar(str[number]);
	}
		_putchar('\n');
}
