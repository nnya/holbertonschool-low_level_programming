#include "holberton.h"
/**
 *main - check the code for Holberton School students.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int m;
	int n;

	for(m = 1; m <= 10; m++)
	{
		for(n = 'a'; n <= 'z'; n++)
			_putchar(n);
			_putchar('\n');
	}
}
