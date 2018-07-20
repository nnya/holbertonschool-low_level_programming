#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **_calloc - function
 * @nmemb: element
 * @size: element
 * Description: function that concatenates two strings.
 * section header: prototype in holberton
 * Return: might be 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == 0)
	{
	return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
		array[i] = '\0';
	return ((void *)array);
}
