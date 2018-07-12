#include "holberton.h"

/**
 * helper - function
 * _sqrt_recursion - function to help with recursion
 * @n: factor
 * @i: factor
 * Description: power of x
 * section header: prototype in holberton
 * Return: might be 0
 */

int helper(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (helper(n, i + 1));
	}

}

/**
 * _sqrt_recursion - function to helper recursion
 * @n: factor
 * Description: power
 * section header: prototype in holberton
 * Return: might be 0
 */

int _sqrt_recursion(int n)
	{
	return (helper(n, 1));
	}
