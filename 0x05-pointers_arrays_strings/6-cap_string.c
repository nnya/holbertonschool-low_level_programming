#include "holberton.h"

/**
 * *cap_string - capitalize all words of a string
 * @s: string
 * Description: reverse the content of an array of integer
 * section header: prototype in holberton
 * Return: might be 0
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = (s[0] - 32);
		while (s[i] == 10 || s[i] == 32 || s[i] == 44 ||
		       s[i] == 59 || s[i] == 46 || s[i] == 33 ||
		       s[i] == 63 || s[i] == 34 || s[i] == 40 ||
		       s[i] == 41 || s[i] == 123 || s[i] == 125 || s[i] == 9)
		{

		i++;
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = (s[i] - 32);
		}
	}
	return (s);
}
