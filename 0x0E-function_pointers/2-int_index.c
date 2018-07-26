#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Short description
 * @array: element
 * @size: element
 * @w: element
 *
 * Description
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int w;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (w = 0; w < size; w++)
	{
		if (cmp(array[w]) != 0)
			{
			return (w);
			}
	}
		return (-1);
}
