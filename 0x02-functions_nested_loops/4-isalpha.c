#include "holberton.h"
/**

 * main - check the code for Holberton School students

 *

 * Return: 0

 */

int _islower(int c)

{

  if(c > 97 && c < 122)

    return(1);
}
  else
    {
      if (C > 65 && C < 90)
    return(0);
    }

/**
 * _isalpha - check the code for Holberton School students.
 * Description: check the alphabet character
 * @c: starting point
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
		return (0);
}

