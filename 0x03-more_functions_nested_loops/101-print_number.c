#include "holberton.h"

/**
 * print_number - printing an integer
 * Description: printing an integer
 * @n: the integer to print
 * Return: Always 0.
 */

void print_number(int n)

{
	if (n < 0)
	{
	_putchar('-');
	n = n * (-1);
	}

	if (n >= 10)
	print_number(n / 10);
	_putchar(n % 10 + '0');

}
