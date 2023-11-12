#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - rango array
 * @min: a
 * @max: a
 * Return: p
*/
int *array_range(int min, int max)
{
int *p;
int i, len;

	if (min > max)
	{
		return (NULL);
	}
len = max - min + 1;
p = malloc(sizeof(int) * len);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		p[i] = min + i;
	}
return (p);
}
