#include "holberton.h"

/**
 * rev_string - update the value
 * @s: string
 * Description: changing the value of a pointer
 * section header: prototype in holberton
 * Return: might be 0
 */
void rev_string(char *s)

{
	int temp, i, j, k, length;

	int count = 0;

	while (s[count] != '\0')
		++count;

	length = count - 1;
	k = length / 2;
	j = length;
	for (i = 0; i < k; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
