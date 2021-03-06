#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Short description
 * @name: element
 * @f: element
 * Description
 */
void print_name(char *name, void (*f)(char *))
{

	void (*ptr)(char *);

	if (name == NULL)
		return;
	if (f == NULL)
		return;
	ptr = f;
	ptr(name);
}
