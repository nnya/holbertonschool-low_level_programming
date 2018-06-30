#include <stdio.h>
/**
* main - starting point
* Description: printing the largest prime number
* section header: a number
* Return: 0
*/
int main(void)

{
	long i;
	long n;

	n = 612852475143;

	for (i = 2; i <= n; i++)
	{
	while (n % i == 0)
	{
		n = n / i;
	}
	}
	printf("%li", i);
	printf("\n");
	return (0);
}
