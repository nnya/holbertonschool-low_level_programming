#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print element of an integer
 * @a: pointer to integer
 * @n: elements of an integer
 * Description: changing the value of a pointer
 * section header: prototype in holberton
 * Return: might be 0
 */
void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
