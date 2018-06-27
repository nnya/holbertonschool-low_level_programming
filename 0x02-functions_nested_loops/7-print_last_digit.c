#include "holberton.h"

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/

int print_last_digit(int n)
{
	int lastdigit;
	if(n >= 0)
{

lastdigit = n%10;
_putchar(lastdigit + '0');
return (lastdigit);
}
	else
{ 
	lastdigit = (n%10)*(-1);
_putchar(lastdigit + '0');
return(lastdigit);
}
}
