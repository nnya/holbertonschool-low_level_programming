#include "holberton.h"
#include <stdio.h>

/**
 * print_square - size
 *@size: to determin the square
 *Description: numbers
 * Return: Always 0.
 */

void print_square(int size)

{

	int n, m;

	if (size > 0)
	{
	for (m = 0; m < size; m++)
	{
		for (n = 0; n < size; n++)
		_putchar('#');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
