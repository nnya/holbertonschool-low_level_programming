#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function
 * @size: factor
 * @c: factor
 * Description: counter
 * section header: prototype in holberton
 * Return: might be 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (0);
	}

	array = malloc(size * sizeof(char));
	if (array != NULL)
	{
		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}
	return (array);
}
