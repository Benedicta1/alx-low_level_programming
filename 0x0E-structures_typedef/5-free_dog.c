#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Write a function that frees dogs.
 * @d: The struct dog to free
 * Return: Should be successful and give back 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
