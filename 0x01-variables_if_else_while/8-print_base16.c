#include <stdio.h>
/**
* main - start
* Return: 0
*/

int main(void)
{
	int n, i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
