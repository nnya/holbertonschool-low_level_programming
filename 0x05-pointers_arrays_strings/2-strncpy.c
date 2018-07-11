#include "holberton.h"

/**
 * *_strncpy - update the value
 * @dest: length of destination
 * @src: length of source
 * @n: length of destination
 * Description: copie a string
 * section header: prototype in holberton
 * Return: might be 0
 */
char *_strncpy(char *dest, char *src, int n)

{
	int srcl;

	for (srcl = 0; srcl < n && src[srcl] != '\0'; srcl++)
		dest[srcl] = src[srcl];
	for (; srcl < n; srcl++)
		dest[srcl] = '\0';

	return (dest);
}
