#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function
 * @str: factor
 * Description: counter
 * section header: prototype in holberton
 * Return: might be 0
 */

char *_strdup(char *str)
{
	char *array;
	int len, i = 0;

	len = 0;

	if (str == 0)
	{
		return (0);
	}
	while (str[i] != '\0')
		i++;
	len = i;

	array = malloc(sizeof(char) * (len + 1));
		i = 0;
			while (str[i] != '\0')
			{
				array[i] = str[i];
				i++;
			}
			array[i] = '\0';
			return (array);
}
