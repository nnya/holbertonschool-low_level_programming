#include <stdio.h>
# include "function_pointers.h"

/**
 * print_name - Short description
 * @name: element
 * @f: element
 * Description
 */
void print_name(char *name, void (*f)(char *))
{

	void (*ptr)(char *);

	ptr = f;
	ptr(name);
	if (name != NULL)
		return;
}
