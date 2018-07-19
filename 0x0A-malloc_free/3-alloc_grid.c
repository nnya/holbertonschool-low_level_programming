#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function
 * @width: factor
 * @height: factor
 * Description: counter
 * section header: prototype in holberton
 * Return: might be 0
 */

int **alloc_grid(int width, int height)

{
	int **array = 0;
	int i = 0, j = 0;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	array = (int**) malloc(height * sizeof(int));
	if (!array)
	{
		free(array);
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int*)malloc(width * sizeof(int));

		if (!array[i])
		{
			for (j = i; j >= 0; j--)
			{
			free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
	}
	return (array);
}
