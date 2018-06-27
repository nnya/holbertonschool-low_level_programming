#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;

	if(n > 98)
	{
		for(i = n; i >= 98; i--)
		{
			if(i != 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i", i);
			}
		}
	} else if (n < 98)
	{
		for(i = n; i <= 98; i++)
		{
			if(i !=98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i" , i);
			}
		}
	}
	else
	{
		printf("%i" , 98);
	}
	printf("\n");
}
