#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * struct dog - structure type
 * @d: structure object
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
