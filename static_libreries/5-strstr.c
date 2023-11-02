#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring
 * @haystack: main string str 1
 * @needle: subsring str 2
 * Return: haystack, haystack with position of substring or 0
*/
char *_strstr(char *haystack, char *needle)
{
int i, j, pos;

if (needle[0] == '\0')
{
return (haystack);
}
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			pos = i;
			for (j = 0; needle[j]; j++)
			{
				if (needle[j + 1] == '\0')
				{
					return (&haystack[pos]);
				}
			pos++;
			}
		}
	}
return (0);
}
