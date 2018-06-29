#include "holberton.h"

/**
 * more_numbers-is printing.
 * Description: printing from 0 to 14
 * @n is counting 0 to 14
 * @m is counting 0 to 10
 * Return: Always 0.
 */
void more_numbers(void)
{
	int m;
	int n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
		if (n >= 10)
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
