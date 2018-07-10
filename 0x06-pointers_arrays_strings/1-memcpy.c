#include "holberton.h"

/**
 * *_memcpy - fill a memory with a constant byte
 * @dest: string
 * @src: the value of the constant
 * @n: array size
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int srcl = 0;

	for (srcl = 0; srcl < n && src[srcl] != '\0'; srcl++)
		dest[srcl] = src[srcl];
	for (; srcl < n; srcl++)
		dest[srcl] = '\0';
	return (dest);
}
