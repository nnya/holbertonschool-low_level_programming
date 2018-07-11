#include "holberton.h"

/**
 * *_strpbrk - string that searches bytes
 * @accept: integer
 * @s: integer
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */
char *_strpbrk(char *s, char *accept)

{
unsigned int j, i;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
		if (s[i] == accept[j])
			return (s + i);
}
return (0);
}
