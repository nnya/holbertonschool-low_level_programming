#include "holberton.h"

/**
 * _print_rev_recursion - prints a string
 * @s: string
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */

void _print_rev_recursion(char *s)

{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
