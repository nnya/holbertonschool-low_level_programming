#include "holberton.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Description: calculating the string length
 * section header: prototype in holberton
 * Return: always 0
 */

int _strlen(char *s)

{
	int count = 0;

	while (s[count] != '\0')
		++count;

	return (count);
}
