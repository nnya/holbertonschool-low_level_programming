#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 * Description: check the alphabet character
 * @c: starting point
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c > 97 && c < 122) || (c > 67 && c < 90))
		return (1);
		return (0);
}
