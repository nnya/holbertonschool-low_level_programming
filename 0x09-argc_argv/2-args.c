#include <stdio.h>

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
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
