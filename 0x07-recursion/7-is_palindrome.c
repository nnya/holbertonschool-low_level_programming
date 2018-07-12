#include "holberton.h"
int helper(char *s, int i, int j);
int find_length(char *s);

/**
 * find_length - function
 * @s: factor
 * Description: counter
 * section header: prototype in holberton
 * Return: might be 0
 */

int find_length(char *s)
{
	if (*s != '\0')
	{
		return (1 + find_length(s + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * helper - function
 * @i: factor
 * @j: factor
 * @s: string
 * Description: using helper
 * section header: prototype in holberton
 * Return: might be 0
 */

int helper(char *s, int i, int j)
{
	if (j - i == 0)
		return (1);
	if (j - i == 1)
{
		if (s[i] == s[j])
			return (1);
		else
			return (0);
}
	if (s[i] != s[j])
	{
		return (0);
	}

		return (helper(s, i + 1, j - 1));
}

/**
 * is_palindrome - function to helper recursion
 * @s: string
 * Description: find length
 * section header: prototype in holberton
 * Return: might be 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int j = find_length(s);

	return (helper(s, i, j - 1));
}
