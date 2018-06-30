#include "holberton.h"

/**
 * print_triangle - printing a triangle
 * @size: the size of the triangle
 * Description: code to print a triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int row, space, col, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		row = 1;
	while (row <= size)
	{
		hash = row;
		space = size - hash;
		col = 1;
		while (col <= space)
		{
			_putchar(' ');
			col++;
		}
		while (col <= size)
		{
			_putchar('#');
			col++;
		}
		row++;
		_putchar('\n');
	}
}
