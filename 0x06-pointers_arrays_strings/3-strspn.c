#include "holberton.h"

/**
 * _strspn - length of a prefix substring
 * @accept: integer
 * @s: integer
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */
unsigned int _strspn(char *s, char *accept)

{
	unsigned int j, i;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
		{
			break;
		}
	}
		return (i);
}
