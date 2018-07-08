#include "holberton.h"

/**
 * *leet - update the value
 * @s: string
 * Description: reverse the content of an array of integer
 * section header: prototype in holberton
 * Return: might be 0
 */
char *leet(char *s)
{
	int i, j;

	char letter[] = "aeotlAEOTL";
	char number[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
				s[i] = number[j];
		}
	}
	return (s);
}
