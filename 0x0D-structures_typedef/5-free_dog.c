#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Short description
 * @d: dog
 *
 * Description: Longer description
 * Return: might be 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
