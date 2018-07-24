#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Short description
 * @name: name
 * @d: element
 * @owner: member
 * @age: The age
 *
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
