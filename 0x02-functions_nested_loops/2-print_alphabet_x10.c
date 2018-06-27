#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 * Description: printing the alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int m;
	int n;

	for (m = 1; m <= 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
			_putchar('\n');
	}
}
