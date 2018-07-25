#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - Short description
 * @name: element
 * @owner: element
 * @age: element
 *
 * Description: Longer description
 * Return: might be 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *newname;
	char *newowner;
	int k;

	for (k = 0 ; name[k] != '\0' ; k++)
		;
	newname = malloc(k + 1);
	if (newname == NULL)
		return (NULL);
	for (k = 0 ; name[k] != '\0' ; k++)
	{
		newname[k] = name[k];
	}
	newname[k] = '\0';
	for (k = 0 ; owner[k] != '\0' ; k++)
		;
	newowner = malloc(k + 1);
	if (newowner == NULL)
	{
		free(newname);
		return (NULL);
	}
	for (k = 0 ; owner[k] != '\0' ; k++)
	{
		newowner[k] = owner[k];
	}
	newowner[k] = owner[k];
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(newname);
		free(newowner);
		return (NULL);
	}
	(*d).name = newname;
	(*d).age = age;
	(*d).owner = newowner;
	return (d);
}
