#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the lenghth of string
 * @str: The string
 *
 * Return: string length
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - function that copies a string pinted by a src including
 * the null byte, to a buffer pointed by dest
 * @dest: the buffer storing the copied string
 * @src: string source
 *
 * Return: a pointer to the dest
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dogowner
 *
 * Return: Null on failure store name and owner otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mbwa;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	mbwa = malloc(sizeof(dog_t));
	if (mbwa == NULL)
	{
		return (NULL);
	}

	mbwa->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (mbwa->name == NULL)
	{
		free(mbwa);
		return (NULL);
	}

	mbwa->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (mbwa->owner == NULL)
	{
		free(mbwa->name);
		free(mbwa);
		return (NULL);
	}

	mbwa->name = _strcopy(mbwa->name, name);
	mbwa->age;
	mbwa->owner = _strcopy(mbwa->owner, owner);

	return (mbwa);
}
