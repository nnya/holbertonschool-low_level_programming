#include "holberton.h"

/**
 * set_string - set the value of a pointer to a character
 * @s: pointer
 * @to: character
 * Description: fill the memory with a constant byte
 * section header: prototype in holberton
 * Return: might be 0
 */
void set_string(char **s, char *to)

{
	*s = to;
}
