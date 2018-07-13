#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - diagonal numbers on table
 * @size: integer
 * @a: integer
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */
void print_diagsums(int *a, int size)

{int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
	sum1 += *(a + i * size + i);
	sum2 += *(a + i * size + size - i - 1);
	}
	printf("%d, %d \n", sum1, sum2);
}
