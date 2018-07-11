#include "holberton.h"


/**
 * *_strchr - fill a memory with a constant byte
 * @s: string
 * @c: reference letter
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */
void print_chessboard(char (*a)[8])

{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
