#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **string_nconcat - function
 * @s1: element
 * @s2: element
 * @n: element
 * Description: function that concatenates two strings.
 * section header: prototype in holberton
 * Return: might be 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *array;


	if (s1 == 0)
	{
		s1 = "";
	}

	if (s2 == 0)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n <= len2)
	{
		array = malloc(sizeof(char) * len1 + 1 + n);

	if (array == 0)
	{
		return (NULL);
	}

		for (i = 0; i < len1; i++)
		{
			array[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			array[i] = s2[j];
			i++;
		}
		array[i] = '\0';
	}
	else
	{
		array = malloc(sizeof(char) * len1 + len2 + 1);
		if (array == 0)
		{
			return (NULL);
		}

		for (i = 0; i < len1; i++)
		{
		array[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
		array[i] = s2[j];
		i++;
		}
		array[i] = '\0';
	}
	return (array);
}

/**
 * _strlen - return the length of a string
 * @s: string
 * Description: calculating the string length
 * section header: prototype in holberton
 * Return: always 0
 */
int _strlen(char *s)

{
	int count = 0;

	while (s[count] != '\0')
		++count;
		return (count);
}
