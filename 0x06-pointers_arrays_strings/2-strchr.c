#include "holberton.h"


/**
 * *_strchr - fill a memory with a constant byte
 * @s: string
 * @c: reference letter
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */

char *_strchr(char *s, char c)

{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}
	if (c  == '\0')
	{
		return (s + n);
	}

	return ((void *)0);
}
