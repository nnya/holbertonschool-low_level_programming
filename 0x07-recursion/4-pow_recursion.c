#include "holberton.h"

/**
 * _pow_recursion - return the factorial of a function
 * @x: factor
 * @y: factor
 * Description: power of x
 * section header: prototype in holberton
 * Return: might be 0
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * (_pow_recursion(x, (y - 1))));
	}
	else
		return (x);
}
