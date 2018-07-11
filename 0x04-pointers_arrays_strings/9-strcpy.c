#include "holberton.h"

/**
 * _strcpy - return the length of a string
 * @dest: destination variable
 * @src: source variable
 * Description: calculating the string length
 * section header: prototype in holberton
 * Return: might be 0
 */

char *_strcpy(char *dest, char *src)

{
	int count;

	for (count = 0; src[count] != '\0'; count++)
		dest[count] = src[count];

	return (dest);
}
