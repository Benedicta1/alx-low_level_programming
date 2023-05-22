#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: The pointer that initializez the struct dog
 * @name: The name to initialize
 * @age: The age to initialize
 * @owner: The owner to initialize
 * Return: Should be successful and give back 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = MALLOC(sizeof(struc dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
