#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function
 * @min: element
 * @max: element
 * Description: function that concatenates two strings.
 * section header: prototype in holberton
 * Return: might be 0
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == 0)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
		array[i - min] = i;
	return (array);
}
