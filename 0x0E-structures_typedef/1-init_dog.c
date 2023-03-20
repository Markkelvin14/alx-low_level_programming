#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable
 * @d: is a struct
 * @name: is a char
 * @age: is a float
 * @owner: is a string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
