#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Short description
 * @array: element
 * @size: element
 * @action: element
 *
 * Description
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (size <= 0 || array == 0 || action == 0)
	{
		return;
	}

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
