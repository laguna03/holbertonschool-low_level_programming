#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - a
 * @nmemb: var
 * @size: var
 * Return: p or null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
memset(p, 0, (nmemb * size));
return (p);
}
