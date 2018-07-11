#include "holberton.h"


/**
 * print_array - return the length of a string
 * @i: the i th element of the array
 * @n:number of elements of the array
 * @a: pointer to interger
 * Description: print the elements of an array of integers
 * section header: prototype in holberton
 * Return: might be 0
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
	if i == (n - 1)
		{
			printf("%d", *(a + i));
		}
	else
	{
		printf("%d", *(a + i));
	}
printf("\n");
}
