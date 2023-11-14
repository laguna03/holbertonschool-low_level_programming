#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns lenght of a string
 * @s: is a value
 * Return: Void
*/
int _strlen(char *s)
{
int count;
count = 0;
while (*s != '\0')
	{
	count++;
	s++;
	}
return (count);
}
/**
 * new_dog - dogie
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Return
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int lname, lowner, i, j;
dog_t *pos;

pos = malloc(sizeof(dog_t));
	if (pos == NULL)
	{
		return (NULL);
	}
lname = _strlen(name);
lowner = _strlen(owner);

pos->name = malloc(lname + 1);
	if (pos->name == NULL)
	{
		free(pos->name);
		free(pos);
		return (NULL);
	}
pos->owner = malloc(lowner + 1);
	if (pos->owner == NULL)
	{
		free(pos->owner);
		free(pos->name);
		free(pos);
		return (NULL);
	}
pos->age = age;
	for (i = 0; i < lname; i++)
	{
		pos->name[i] = name[i];
	}
	pos->name[i] = '\0';
	for (j = 0; j < lowner; j++)
	{
		pos->owner[j] = owner[j];
	}
	pos->owner[j] = '\0';
	return (pos);
}
