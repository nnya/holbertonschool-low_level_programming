#include "holberton.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * @count: counting character in a  string
 * Description: calculating the string length
 * section header: prototype in holberton
 * Return: might be 0
 */

int _strlen(char *s)

{
	int count = 0;

	while (s[count] != '\0')
		++count;

	return (count);
}
