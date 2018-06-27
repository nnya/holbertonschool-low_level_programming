#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 * Description: minute of the day
 * Return: Always 0.
 */
void jack_bauer(void)

{
	int h1, h2, h;
	int m1, m2, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			h1 = h / 10;
			h2 = h % 10;
			m1 = m / 10;
			m2 = m % 10;

			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}
	}
}
