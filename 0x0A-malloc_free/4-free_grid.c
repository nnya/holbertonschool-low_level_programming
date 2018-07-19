#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: factor
 * @height: factor
 * Description: counter
 * section header: prototype in holberton
 * Return: might be 0
 */
void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
