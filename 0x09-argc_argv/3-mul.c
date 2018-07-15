#include <stdio.h>
#include <stdlib.h>

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

	if (argc != 3)

	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		int i, j;

		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n",  i * j);
	}
	return (0);
}
