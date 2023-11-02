#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function to copy the array.
 * @dest: Location it will be copied to.
 * @src: original copy
 * Return: 0.
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	if (!src || !dest)
	{
		return (0);
	}

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	{
		dest[count] = '\0';
		return (dest);
	}
}
