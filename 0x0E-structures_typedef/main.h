#ifndef DOG_H
#define DOG_H

/**
 * struct my_dog - describes a dog
 * @name: the dog's name
 * @age: The dog's age
 * @owner: The owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

