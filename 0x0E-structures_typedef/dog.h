#include <stdio.h>
#include <stdlib.h>

/**
 * user - a function that prints out a user's profile
 */

struct Dog
{
	char *name;
	int age;
	char *owner;
}

/**
 * dog - a function that defines user
 *@name - Dogname
 *@age - age
 *@owner - Owner's name
 *
 * Return - user
 */

struct Dog *my_dog(char *name, int age, char *owner)
{
	struct Dog  *dog;

	dog = malloc(sizeof(struct dog);
	if (dog == NULL)
		return(NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}

