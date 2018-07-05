#include "holberton.h"


/**
 * print_array - return the length of a string
 * @n:number of elements of the array
 * @a: pointer to interger
 * Description: print the elements of an array of integers
 * section header: prototype in holberton
 * Return: might be 0
 */

void print_array(int *a, int n)

{

for (*a = 0; *a < n; *a++)
{
printf("%d", *a);
}
printf("\n");
}
