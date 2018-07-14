#include <stdio.h>

/**
 * main - program that prints it name
 * @argc: integer
 * @argv: integer
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
		printf("%s\n", argv[0]);
		return (0);
}
