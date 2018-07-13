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
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
		int main(void)
		{
			int c3[3][3] = {
				{0, 1, 5},
				{10, 11, 12},
				{1000, 101, 102},
			};
			int c5[5][5] = {
				{0, 1, 5, 12124, 1234},
				{10, 11, 12, 123521, 12512},
				{1000, 101, 102, 12545, 214543435},
				{100, 1012451, 11102, 12545, 214543435},
				{10, 12401, 10452, 11542545, 1214543435},
			};
			print_diagsums((int *)c3, 3);
			print_diagsums((int *)c5, 5);
			return (0);
		}
	sum1 += *(a + i * size + i);
	}
	for (i = 0; i < size; i++)
	{
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
		int main(void)
		{
			int c3[3][3] = {
				{0, 1, 5},
				{10, 11, 12},
				{1000, 101, 102},
			};
			int c5[5][5] = {
				{0, 1, 5, 12124, 1234},
				{10, 11, 12, 123521, 12512},
				{1000, 101, 102, 12545, 214543435},
				{100, 1012451, 11102, 12545, 214543435},
				{10, 12401, 10452, 11542545, 1214543435},
			};
			print_diagsums((int *)c3, 3);
			print_diagsums((int *)c5, 5);
			return (0);
		}
	sum2 += *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
