#include "holberton.h"

/**
 * swap_int - update the value
 * @a: pointer
 * @b: pointer
 * Description: changing the value of a pointer
 * section header: prototype in holberton
 * Return: might be 0
 */

void swap_int(int *a, int *b)

{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
