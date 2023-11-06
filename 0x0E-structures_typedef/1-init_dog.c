#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a funtion that initializes a variable
 * @d: struct dog
 * @name: string
 * @age: integer string
 * @owner: string - owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
