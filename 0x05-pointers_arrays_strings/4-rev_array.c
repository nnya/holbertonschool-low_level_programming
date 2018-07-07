#include "holberton.h"

/**
 * reverse_array - update the value
 * @n: number of element of an array integers
 * @a: arrays
 * Description: reverse the content of an array of integer
 * section header: prototype in holberton
 * Return: might be 0
 */
void reverse_array(int *a, int n)

{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
	}
}
