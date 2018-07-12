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
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

		return (helper(n, i + 1));
}

/**
 * is_prime_number - function to helper recursion
 * @n: factor
 * Description: power
 * section header: prototype in holberton
 * Return: might be 0
 */
int is_prime_number(int n)

{

	if (n < 2)
	{
	return (0);
	}
	return (helper(n, 2));

}
