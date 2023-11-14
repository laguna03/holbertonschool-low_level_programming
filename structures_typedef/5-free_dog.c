#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - perro
 * @d: delta
 * Return: nada
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
free(d->name);
free(d->owner);
free(d);
}
