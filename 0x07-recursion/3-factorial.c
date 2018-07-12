#include "holberton.h"

/**
 * factorial - return the factorial of a function
 * @s: factor
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */

int factorial(int n)

{
	if (n < 0)

	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	{
		return (n * factorial(n - 1));
	}

}
