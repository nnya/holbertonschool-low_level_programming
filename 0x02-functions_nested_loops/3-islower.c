#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 * Description: check lower cases
 * @c: starting point
 * Return: 0
 */

int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
		else
			return (0);
				}
