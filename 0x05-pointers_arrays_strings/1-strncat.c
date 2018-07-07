#include "holberton.h"

/**
 * *_strcat - update the value
 * @dest: length of destination
 * @src: length of source
 * Description: changing the value of a pointer
 * section header: prototype in holberton
 * Return: might be 0
 */
char *_strncat(char *dest, char *src, int n)

{
	int destl, srcl;

	for (destl = 0; dest[destl] != '\0'; destl++)
	{
	}
	for (srcl = 0; srcl < n && src[srcl] != '\0'; srcl++)
		dest[destl + srcl] = src[srcl];
	dest[destl + srcl] = '\0';

	return (dest);
}
