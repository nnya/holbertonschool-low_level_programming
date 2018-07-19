#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function
 * @b: element
 * Description: function that allocates memory using malloc
 * section header: prototype in holberton
 * Return: might be 0
 */
void *malloc_checked(unsigned int b)

{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

		return (ptr);
}
