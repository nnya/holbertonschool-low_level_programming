#include "holberton.h"

/**
 * *string_toupper - update the value
 * @s: string
 * Description: reverse the content of an array of integer
 * section header: prototype in holberton
 * Return: might be 0
 */
char *string_toupper(char *s)

{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if ((s[i] >= 97) && (s[i] <= 122))
			s[i] = (s[i] - 32);
	return (s);
}
