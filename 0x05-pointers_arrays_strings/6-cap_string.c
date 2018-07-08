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
		switch (s[i])
		{
		case 10: case ' ': case 44: case 59: case 46: case 33:
		case 63: case 34: case 40: case 41: case 123: case 125: case 9:
		i++;
		if ((s[i] >= 97) && (s[i] <= 122))
			s[i] = (s[i] - 32);
		break;
		}
	return (s);
}
