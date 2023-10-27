#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - Connect two strings up to a specified number of characters.
 * @dest: The destination string.
 * @src: The source string to be connected to dest.
 * @n: The maximum number of characters to connect from src.
 * Return: A pointer to the conneted string (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	int i;

	for (i = 0; i < n  &&  src[i] != '\0';  i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
