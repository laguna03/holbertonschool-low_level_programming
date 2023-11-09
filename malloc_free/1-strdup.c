#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string
 * @str: og string
 * Return: null or copy of str
 */

char *_strdup(char *str)
{
	int size;
	char *copy;
	int count;

	if (str == NULL)
{
	return (NULL);
}

size = strlen(str);
copy = (char *)malloc(sizeof(char) * size + 1);

if (copy == NULL)
{
	return ((char *)NULL);
}

for (count = 0; count < size; count++)
{
	copy[count] = str[count];
}
return (copy);
}
