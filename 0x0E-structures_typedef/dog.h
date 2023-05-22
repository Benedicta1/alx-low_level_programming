#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The information of a dog
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: Should be successful and give back 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
