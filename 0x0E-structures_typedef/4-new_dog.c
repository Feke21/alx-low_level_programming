#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: struct dog. if it fails, return null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int ln, lo, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (ln = 0; name[ln]; ln++)
		;
	for (lo = 0; owner[lo]; lo++)
		;
	dog->name = malloc(ln * sizeof(char));
	dog->owner = malloc(lo * sizeof(char));

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ln; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	dog->age = age;
	for (i = 0; i < lo; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[i] = '\0';
	return (dog);
}
