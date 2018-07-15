#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints it name
 * @argc: integer
 * @argv: integer
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */

int main(int argc, char *argv[])
{
	int m, n, SumPositive = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != 0; m++)
		{
			if ((argv[n][m] < 48) || (argv[n][m] > 57))
			{
				printf("Error\n");
			return (1);
			}
		}
		SumPositive += atoi(argv[n]);
	}
	printf("%d\n", SumPositive);
	return (0);
}
