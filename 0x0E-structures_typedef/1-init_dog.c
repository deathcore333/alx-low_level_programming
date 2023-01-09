#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the variable of type struct dog
 * @d: the structure to initialize
 * @name: the dog name
 * @age: dog's age
 * @owner: the dog's owner
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
