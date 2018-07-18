#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function
 * @s1: factor
 * @s2: factor
 * Description: counter
 * section header: prototype in holberton
 * Return: might be 0
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int len1, len2, i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;

	if (s2 == 0)
	{
		return (0);
	}
	for (i = 0; s1[i] != '\0'; i++)
		len1 = i;

	for (j = 0; s2[j] != '\0'; j++)
		len2 = j;
	array = malloc(sizeof(char) * len1 + sizeof(char) * len2 + 1);
	if (array == 0)
	{
		free(array);
		return (0);
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		array[i] = s2[j];
		i++;
		j++;
	}
	array[i] = s2[j];
	return (array);
}
