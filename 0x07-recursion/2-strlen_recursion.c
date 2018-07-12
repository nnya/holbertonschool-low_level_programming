#include "holberton.h"

/**
 * int _strlen_recursion - prints a string
 * @s: string
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */

int _strlen_recursion(char *s)

{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}

}
