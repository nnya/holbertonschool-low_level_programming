#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - start
 * Return: 0
 */
int main(void)
{
int n, lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;


printf("Last digit of %i is %i ", n, lastdigit);

if (lastdigit > 5)
{
printf("and is greater than 5\n");
}

if (lastdigit == 0)
{
printf("and is 0\n");
}

if (lastdigit != 0 && lastdigit < 6)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
