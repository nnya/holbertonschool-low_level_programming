#include "holberton.h"

/**
 * *rot13 - encode a string using rot13
 * @s: string
 * Description: reverse the content of an array of integer
 * section header: prototype in holberton
 * Return: might be 0
 */
char *rot13(char *s)

{
	int i, j;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; input[j] != '\0'; j++)
			{
				if (s[i] == input[j])
				{
					s[i] = output[j];
					break;
				}
			}
		}
		return (s);
	}
