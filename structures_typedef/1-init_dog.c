#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializing the dog struct
 * @d: poimter to the struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Nothing
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
