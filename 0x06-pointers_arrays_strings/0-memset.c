#include "holberton.h"

/**
 * *_memset - fill a memory with a constant byte
 * @s: string
 * @b: the value of the constant
 * @n: array size
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
