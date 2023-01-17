#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs function
 * @d: struct dog
 *
 * Return: nothing
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
