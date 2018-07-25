#ifndef _DOG_
#define _DOG_

/**
 * struct dog - Short description
 * @name: name
 * @owner: member
 * @age: The age
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
}
dog_t;
typedef struct dog dog_it;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
