#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates array with specific char
 * @size: size of array
 * @c: char to initialize each elemnt of array
 * Return: Null or por depending outcome of code
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pos;

	if (size == 0)
	{
		return (NULL);
	}

	pos = malloc(size * sizeof(char));

	if (pos == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; size > i; i++)
		{
			pos[i] = c;
		}
		return (pos);
	}
}
